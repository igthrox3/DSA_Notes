#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,3,4,4,4,5};
    int x = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = n-1;
    int result = -1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            result = mid;
            low = mid + 1;
        }else if(arr[mid] < x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    cout << "last occurence of " << x << " is at index " << result << endl;
    return 0;
}