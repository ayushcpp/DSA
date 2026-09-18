/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    // Brute Force Method
    int *res=malloc(sizeof(int));
    int size=0;
    int capacity=1;
    for(size;size<nums1Size;size++){
        if(size==capacity){
            capacity*=2;
            res=realloc(res,capacity*sizeof(int));
        }
        res[size]=-1;
    }
    bool found;
    for(int i=0;i<nums1Size;i++){
        found=false;
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                found=true;
            }
            if(found && nums1[i]<nums2[j]){
                res[i]=nums2[j];
                break;
            }
        }
    }
    *returnSize = nums1Size;
    return res;
}