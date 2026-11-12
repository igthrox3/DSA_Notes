#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei){
    int pivot_element = arr[(si+ei)/2];
    int count = 0;
    for(int i=si; i<=ei; i++){
        if(i == (si+ei)/2) continue;
        if(arr[i] <= pivot_element){
            count++;
        }
    }

    int pivot_idx = si+count;
    swap(arr[(si+ei)/2], arr[pivot_idx]);
    int i=si, j=ei;
    while(i < pivot_idx && j> pivot_idx){
        if(arr[i] <= pivot_element) i++;
        if(arr[j] > pivot_element) j--;
        else if(arr[i] > pivot_element && arr[j] <= pivot_element){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivot_idx;
}

void quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr, si, ei);
    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, ei);
}

int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    cout << endl;
    quicksort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    cout << endl;
}