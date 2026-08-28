class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int prefix=0;
        int MAX=INT_MIN;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            MAX=max(MAX,prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return MAX;
    }
};