class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return {};
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                long long ans=(long long)target-nums[i]-nums[j];
                int k=j+1,l=nums.size()-1;
                while(k<l){
                    if(nums[k]+nums[l]>ans){
                        l--;
                    }
                    else if(nums[k]+nums[l]<ans){
                        k++;
                    }
                    else{
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        result.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return result;
    }
};