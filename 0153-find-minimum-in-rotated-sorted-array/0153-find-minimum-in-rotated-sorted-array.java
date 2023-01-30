class Solution {
    public int findMin(int[] nums) {
        
        int ans = 5000;
        int l = 0, r = nums.length - 1;
        
        while(l <= r){
			int m = (l + r ) / 2;
			if (nums[m] > nums[r]) {
				l = m + 1;
			}
            
			if (nums[m] < nums[r]){
				ans = nums[m];
				r = m;
			}
            
            if (l == r){
                ans = nums[l];
                break;
            }
		}
        return ans;
    }
}