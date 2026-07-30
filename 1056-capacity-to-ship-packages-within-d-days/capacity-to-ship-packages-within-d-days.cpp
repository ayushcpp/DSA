class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        if(days>weights.size()){
            return -1;
        }
        int start=0,end=0,mid;
        int ans;
        for(int i=0;i<weights.size();i++){
            start=max(start,weights[i]);
            end+=weights[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int count=1,weight=0;
            for(int i=0;i<weights.size();i++){
                weight+=weights[i];
                if(weight>mid){
                    count++;
                    weight=weights[i];
                }
            }
            if(count<=days){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};