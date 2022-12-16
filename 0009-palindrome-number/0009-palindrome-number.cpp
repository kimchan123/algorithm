class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        int n = x;
        long temp = 0;
        while (n){
            int remainder = n % 10;
            temp = temp * 10 + remainder;
            n = n / 10;
        }
        if (temp == x) return true;
        return false;
    }
};