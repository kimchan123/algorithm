class Solution {
    fun coinChange(coins: IntArray, amount: Int): Int {
        val dp = IntArray(amount+1, {Integer.MAX_VALUE/2})
        coins.sort()
        
        if (amount == 0) {
            return 0
        }
        
        for (i in coins) {
            if (i <= amount)
                dp[i] = 1
        }
        
        for (i in (1..amount)) {
            for (j in coins) {
                if (i - j >= 1) {
                    dp[i] = Math.min(dp[i], dp[i-j] + 1)
                }
            }
        }
        
        if (dp[amount] == Integer.MAX_VALUE/2) {
            return -1
        }
        
        return dp[amount]
    }
}

