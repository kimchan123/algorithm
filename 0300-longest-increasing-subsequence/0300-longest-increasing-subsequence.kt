import kotlin.math.max

class Solution {
    fun lengthOfLIS(nums: IntArray): Int {
        val dp = IntArray(nums.size, {1})
        var answer = 1
        
        for (i in (1..nums.size-1)) {
            for (j in (0..i-1)) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j]+1)
                    answer = max(answer, dp[i])
                }
            }
        }
        
        return answer
    }
}


