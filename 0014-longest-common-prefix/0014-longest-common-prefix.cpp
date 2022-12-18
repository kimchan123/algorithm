class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string standard = strs[0];
        int maxLen = INT_MAX;
        
        for (int i=1; i<strs.size(); i++) {
            int j = 0;
            while (j < strs[i].length() && j < standard.length()) {
                if (standard[j] != strs[i][j]) {
                    break;
                }
                j++;
            }
            maxLen = min(maxLen, j);
        }
        
        if (maxLen == 0) {
            return "";
        }
        return standard.substr(0, maxLen);
    }
};