class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // if(arr[0]>arr[1]) return arr[0];
        // if(arr[arr.size()-1]>arr[arr.size()-2]) return arr[arr.size()-1];
        int start=1,end=arr.size()-2;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1]) 
            start=mid+1;
            else
            end=mid-1;
        }
        return -1;
    }
};