class Solution {
public:
    unordered_map<char, int> m;
    vector<char> v;
    
    void init() {
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
    }
    
    int romanToInt(string s) {
        init();
        int answer = 0;
        
        for (int i=0; i<s.length(); i++) {
            if (m[s[i]] < m[s[i+1]]) {
                answer -= m[s[i]];
            } else {
                answer += m[s[i]];
            }
        }
        
        return answer;
    }
};