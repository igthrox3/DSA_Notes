#include <iostream>
using namespace std;
//sol 1 (brute force method)

/*int main() {
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int target = 18;
    for(int i = 0; i<9; i++){
        if(arr[i]>=target){
            cout << arr[i-1]  << endl;
            break;
        }
    }
}*/

//sol 2 (binary search algorithm)
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int target = 14;
    int low = 0;
    int high = n-1;
    bool flag = false;

    while(low<=high){
        int mid = (high + low)/2;
        if(arr[mid]==target){
            cout << arr[mid-1] << endl;
            flag = true;
            break;
        }else if(arr[mid]>target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    if(!flag){
        cout << arr[high] << endl;
    }
}