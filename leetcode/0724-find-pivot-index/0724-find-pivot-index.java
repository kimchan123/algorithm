class Solution {
    public int pivotIndex(int[] nums) {
        int sum = 0;
        
        for (int i=0; i<nums.length; i++) {
            sum += nums[i];
        }
        
        int leftSum = 0;
        
        for (int i=0; i<nums.length; leftSum += nums[i++]) {
            if (2 * leftSum == sum - nums[i]) {
                return i;
            }
        }
        
        return -1;
    }
}