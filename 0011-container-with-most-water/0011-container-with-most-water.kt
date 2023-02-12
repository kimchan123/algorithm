class Solution {
    fun maxArea(height: IntArray): Int {
        var left = 0
        var right = height.size - 1
        
        var maxArea = 0
        while (left < right) {
            maxArea = Math.max(maxArea, calculate(height, left, right))
            if (height[left] < height[right]) {
                left++
            } else {
                right--
            }
        }
        
        return maxArea
    }
    
    fun calculate(height: IntArray, left: Int, right: Int): Int = Math.min(height[left], height[right]) * (right - left) 
}