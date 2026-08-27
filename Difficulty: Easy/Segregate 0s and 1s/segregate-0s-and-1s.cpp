class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int start=0,end=arr.size()-1;
        while(start<end){
            if(arr[start]==0){
                start++;
            }
            else{
                if(arr[end]==0){
                    swap(arr[start],arr[end]);
                    end--,start++;
                }
                else{
                    end--;
                }
            }
        }
    }
};