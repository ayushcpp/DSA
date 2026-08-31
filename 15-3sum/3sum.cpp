class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target=0-nums[i];
            int start=i+1,end=nums.size()-1;
            while(start<end){
                if(nums[start]+nums[end]==target){
                    vector<int>temp={nums[i],nums[start],nums[end]};
                    ans.push_back(temp);
                    end--;
                    start++;
                    while(start<end && nums[start]==nums[start-1]) start++;
                    while(start<end && nums[end]==nums[end+1]) end--;
                }
                else if(nums[start]+nums[end]>target){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return ans;
    }
};