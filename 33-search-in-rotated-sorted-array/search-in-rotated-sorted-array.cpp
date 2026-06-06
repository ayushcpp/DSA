class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            return mid;

            else if (nums[mid]>=nums[0]){
                if(nums[0]<=target && nums[mid]>=target)
                end=mid-1;

                else
                start=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};