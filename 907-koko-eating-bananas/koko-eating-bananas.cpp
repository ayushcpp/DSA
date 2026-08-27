class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int end=0,mid,ans,n=piles.size();
        long start=0;
        for(int i=0;i<n;i++){
            start+=piles[i];
            end=max(end,piles[i]);
        }
        start =max(1L, start / h);;
        while(start<=end){
            mid=start+(end-start)/2;
            // mid ammount of banans to consumne in one hour
            int total_time=0;
            for(int i=0;i<n;i++){
                total_time+=piles[i]/mid;
                if(piles[i]%mid){
                    total_time++;
                }
            }
            if(total_time>h){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};