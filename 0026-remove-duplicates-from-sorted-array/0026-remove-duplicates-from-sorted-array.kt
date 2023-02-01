class Solution {
    fun removeDuplicates(nums: IntArray): Int {
        if (nums.size == 0) return 0
        
        var lastIdx = 0
        
        for (j in 1..nums.size-1) {
            if (nums[j] > nums[lastIdx]) {
                nums[++lastIdx] = nums[j]
            }
        }
        
        return lastIdx+1
    }
}