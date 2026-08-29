class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0,rightmax=0,maxheight=height[0],water=0;
        int index=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>maxheight){
                maxheight=height[i];
                index=i;
            }
        }
        // Left Part
        for(int i=0;i<index;i++){
            if(leftmax>height[i]){
                water+=leftmax-height[i];
            }
            else{
                leftmax=height[i];
            }
        }
        // Right Part
        for(int i=height.size()-1;i>index;i--){
            if(rightmax>height[i]){
                water+=rightmax-height[i];
            }
            else{
                rightmax=height[i];
            }
        }
        return water;
    }
};