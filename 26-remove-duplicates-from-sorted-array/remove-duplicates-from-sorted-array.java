class Solution {
    public int removeDuplicates(int[] nums) {
        int slow = 1;
        int fast = nums[0] ;
        for(int i =1; i<nums.length; i++)
        {
            if(nums[i] != fast)
            {
                nums[slow] = nums[i];
                fast = nums[slow];
                slow++;
            }
        }
        return slow;
    }
}