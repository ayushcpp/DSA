class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int start=0,end=arr.size()-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==1){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        return arr.size()-start;
    }
};