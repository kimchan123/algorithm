class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        
        for (int i=0; i<nums.size(); i++) {
            int n = nums[i];
            int diff = target - n;
            
            if (map.count(diff)) {
                return {map[diff], i};
            }
            map[n] = i;
        }
        
        return {};
    }
};