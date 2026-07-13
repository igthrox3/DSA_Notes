#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,0,0,0,0,0,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0, high = n-1;
    int s = 1;
    int result = 0;
    int count = 0;

    while(low <= high){
        int mid = (high+low)/2;
        if(arr[mid] == s){
            result = mid;
            high = mid - 1;
        }else if(arr[mid] > s){
            high = mid + 1;
        }else{
            low = mid + 1;
        }
    }

    count = n - result;
    cout << count << endl;
}