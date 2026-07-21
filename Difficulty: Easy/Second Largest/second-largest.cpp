class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int Big1=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>Big1)
            Big1=arr[i];
        }
        int Big2=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>Big2 && arr[i]!=Big1){
                Big2=arr[i];
            }
        }
        return Big2;
    }
};