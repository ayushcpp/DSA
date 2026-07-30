class Solution {
  public:
    int splitArray(vector<int>& arr, int k) {
        // code here
        if(k>arr.size()){
            return -1;
        }
        int start=0,end=0,mid,ans;
        for(int i=0;i<arr.size();i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int sumarray=0,subarray=1;
            for(int i=0;i<arr.size();i++){
                sumarray+=arr[i];
                if(sumarray>mid){
                    subarray++;
                    sumarray=arr[i];
                }
            }
            if(subarray<=k){
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