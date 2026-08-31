class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        if(m>position.size()){
            return 0;
        }
        int ans;
        int start=1,end=0,mid;
        sort(position.begin(),position.end());
        end=position[position.size()-1] -position[0];
        while(start<=end){
            mid=start+(end-start)/2;
            int count=1,dist=position[0];
            for(int i=0;i<position.size();i++){
                if(dist+mid<=position[i]){
                    count++;
                    dist=position[i];
                }
            }
            if(count<m){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};