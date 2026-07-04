#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int target_idx = -1; 

        while(low <= high){
            int mid = (low + high)/2 ;
            if(nums[mid] == target){
                target_idx = mid;
                break;
            }else if (nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    return target_idx;
    }
};

int main(){
    vector<int> nums = {1,4,6,8,3,65,89,3,2};  // Create the vector
    Solution s1;                                 // Create object (default constructor)
    int target = 3;
    int result = s1.search(nums, target);        // Call search()
    
    cout << "Target found at index: " << result << endl;
    return 0;
}