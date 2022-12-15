class Solution {
public:
    unordered_map<int, int> m;
    
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        
        for (int i=0; i<guess.length(); i++) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                m[secret[i]] = m[secret[i]] + 1;
            }
        }
        
        for (int i=0; i<guess.length(); i++) {
            if (secret[i] == guess[i]) {
                continue;
            } else {
                if (m[guess[i]] != 0) {
                    cows++;
                    m[guess[i]] = m[guess[i]] - 1;
                }
            }
        }
        
        string answer = "";
        
  
        answer += to_string(bulls) + "A";  
        answer += to_string(cows) + "B";    
        
        return answer;
    }
};

//1 8 0 7
//7 8 1 0

