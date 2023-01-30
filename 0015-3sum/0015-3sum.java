class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Set<List<Integer>> set = new HashSet<>();
        if (nums.length == 0) {
            return new ArrayList<>();
        }
        
        Arrays.sort(nums);
        int sum = 0;
        
        for (int i = 0; i < nums.length - 2; i++) {
            int l = i + 1;
            int r = nums.length - 1;
            while (l < r) {
                sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    set.add(Arrays.asList(nums[i], nums[l++], nums[r--]));
                } else if (sum < 0) { 
                    l++;
                } else {
                    r--;
                }
            }
        }
        return new ArrayList<>(set);
    }
}