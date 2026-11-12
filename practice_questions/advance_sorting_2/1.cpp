#include <iostream>
using namespace std;

void partition(int arr[], int si, int ei){
    int pivot_element = arr[(si+ei)/2];
    int count = 0;
    for(int i=si; i<ei; i++){
        if(arr[(si+ei)/2] == i) continue;
        if(arr[i] <= pivot_element){
            count ++;
        }
    }
    int pivot_idx = count + si;
    swap(arr[(si+ei)/2], arr[pivot_idx]);
    int i=si, j=ei;
    while(i<pivot_idx && j>pivot_idx){
        if(arr[i] <= pivot_element) i++;
        if(arr[j] > pivot_element) j++;
        else if(arr[i] > pivot_element && arr[j])
    }
}

int kthsmallest(int arr[], int si, int ei, int k){
    int pi = partition(arr, si, ei);
    if(pi+1 == k) return arr[pi];
    else if(pi+1 < k) return kthsmallest(arr, pi+1, ei, k);
    else return kthsmallest(arr, si, pi-1, k);
}

int main(){
    int arr[] = {5,3,4,1,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout << kthsmallest(arr, 0, n-1, k);
}