class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int count =1;
        int start=0,end=1;
        while(end<arr.size()){
            if(arr[start]!=arr[end]){
                count++;
                start++;
                arr[start]=arr[end];
                end++;
            }
            else{
                end++;
            }
        }
        return count;
    }
};