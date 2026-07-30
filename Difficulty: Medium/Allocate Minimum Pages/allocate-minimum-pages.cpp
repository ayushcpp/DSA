class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()){
            return -1;
        }
        long long start=0,end=0,mid;
        for(int i=0;i<=arr.size()-1;i++){
            start=max(start,(long long)arr[i]);
            end+=arr[i];
        }
        long long page=0,count=0,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            int page=0,count =1;
            for(int i=0;i<=arr.size()-1;i++){
                page+=arr[i];
                if(page>mid){
                    count++;
                    page=arr[i];
                }
            }
            if(count<=k){
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