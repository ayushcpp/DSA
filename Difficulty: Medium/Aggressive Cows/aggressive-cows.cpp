class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int start=1,end,mid ,ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        end=arr[n-1]-arr[0];
        while(start<=end){
            mid=start+(end-start)/2;
            int count =1,pos=arr[0];
            for(int i=0;i<n;i++){
                if(pos+mid<=arr[i]){
                    count++;
                    pos=arr[i];
                }
            }
            if(count<k){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};