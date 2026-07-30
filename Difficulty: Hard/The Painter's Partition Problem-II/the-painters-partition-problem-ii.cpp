class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        if(k>arr.size()){
            return -1;
        }
        int start=0,end=0,mid,ans=0;
        for(int i=0;i<arr.size();i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int painter=1,minTime=0;
            for(int i=0;i<arr.size();i++){
                minTime+=arr[i];
                if(minTime>mid){
                    painter++;
                    minTime=arr[i];
                }
            }
            if(painter<=k){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};