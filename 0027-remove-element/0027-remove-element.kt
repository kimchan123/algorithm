class Solution {
    fun removeElement(nums: IntArray, `val`: Int): Int {
        var idx = 0;
        
        nums.forEach {
            if (it != `val`) nums[idx++] = it
        }
        
        return idx
    }
}