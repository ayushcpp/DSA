class Solution {
  public:
    bool fourSum(vector<int>& arr, int x) {
        // code here
        if(arr.size()<4){
            return false;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-3;i++){
            if (i > 0 && arr[i] == arr[i - 1]) continue;
            for(int j=i+1;j<arr.size()-2;j++){
                if (j > i + 1 && arr[j] == arr[j - 1]) continue;
                int start=j+1,end=arr.size()-1;
                long long target = (long long)x - arr[i] - arr[j];
                while(start<end){
                    long long sum = arr[start] + arr[end];
                    if(sum==target){
                        return true;
                    }
                    else if(sum>target){
                        end--;
                    }
                    else{
                        start++;
                    }
                }
            }
        }
        return false;
    }
};