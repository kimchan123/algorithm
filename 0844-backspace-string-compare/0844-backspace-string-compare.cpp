class Solution {
public:
    string s1, s2;
    
    bool backspaceCompare(string s, string t) {
        for (int i=0; i<s.length(); i++) {
            if (s[i] != '#') {
                s1 += s[i];
            } else {
                if (!s1.empty()) {
                    s1.pop_back();
                }
            }
        }
        
        for (int i=0; i<t.length(); i++) {
            if (t[i] != '#') {
                s2 += t[i];
            } else {
                if (!s2.empty()) {
                    s2.pop_back();
                }
            }
        }
        
        return s1 == s2;
    }
};