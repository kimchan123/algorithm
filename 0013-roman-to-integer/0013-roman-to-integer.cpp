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
            if (v.empty()) {
                v.push_back(s[i]);
            } else {
                //v의 top이랑 새로운 문자를 비교
                //새로운 문자가 더 크면 바로 더함.
                if (m[v.back()] > m[s[i]]) {
                    while (!v.empty()) {
                        answer += m[v.back()];
                        v.pop_back();
                    }
                    v.push_back(s[i]);
                }
                
                else if (m[v.back()] == m[s[i]]) {
                    v.push_back(s[i]);
                }
                
                else {
                    int temp = 0;
                    while (!v.empty()) {
                        temp += m[v.back()];
                        v.pop_back();
                    }
                    
                    answer += (m[s[i]] - temp);
                }
            }  
        }
        
        
        while (!v.empty()) {
            answer += m[v.back()];
            v.pop_back();
        }
        
        return answer;
    }
    

};