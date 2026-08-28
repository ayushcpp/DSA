class Solution {
  public:
    vector<int> equalSum(vector<int>& arr) {
        // code here
        if(arr.size() < 2) return {-1, -1, -1};
        int Total_sum=0;
        for(int i=0;i<arr.size();i++){
            Total_sum+=arr[i];
        }
        int prefix=0;
        int MIN=INT_MAX;
        int pos=-1;
        int flag=1;
        for(int i=0;i<arr.size()-1;i++){
            prefix+=arr[i];
            if(MIN>(abs(prefix - (Total_sum - prefix)))){
                MIN=abs(prefix - (Total_sum - prefix));
                pos=i;
                if((prefix+MIN)==(Total_sum-prefix)){
                    flag=1;
                }
                else{
                    flag=2;
                }
            }
        }
        vector<int>ans={MIN,pos+2,flag};
        return ans;
    }
};