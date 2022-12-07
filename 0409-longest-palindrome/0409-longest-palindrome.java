class Solution {
    public int longestPalindrome(String s) {
        Map<Character, Integer>map = new HashMap<>();
        int count = 0;
        for(char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
            
            if(map.get(c)%2 == 0) count++;
        }
        
        if(count*2 == s.length()) return count*2;
        if(count*2 < s.length()) return count*2 + 1;
        
        return count;
    }
}