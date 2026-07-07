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