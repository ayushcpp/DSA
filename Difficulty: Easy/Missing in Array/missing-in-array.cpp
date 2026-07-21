class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        int XOR1=0,XOR2=0;
        for(int i=0;i<n-1;i++){
            XOR1=XOR1^(i+1);
            XOR2=XOR2^arr[i];
        }
        XOR1=XOR1^n;
        return XOR1^XOR2;
    }
};