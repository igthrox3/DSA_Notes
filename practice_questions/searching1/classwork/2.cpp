#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]); // Auto-calculates size
    int target = 3;
    int low = 0;
    int high = n - 1;
    int ans = -1; // -1 means "not found"

    while(low <= high){
        int mid = low + (high - low) / 2; // safer against overflow
        
        if(arr[mid] == target){
            ans = mid;       // save this index
            high = mid - 1;  // keep searching on the LEFT side
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    if(ans == -1)
        cout << "Target not found" << endl;
    else
        cout << "First occurrence at index: " << ans << endl; // Outputs 4

    return 0;
}
//ff