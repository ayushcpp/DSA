class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        if(arr.size()<3){
            return false;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++){
            int ans=target-arr[i];
            int start=i+1;
            int end=arr.size()-1;
            while(start<end){
                if(arr[start]+arr[end]==ans){
                    return true;
                }
                else if(arr[start]+arr[end]>ans){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return false;
    }
};