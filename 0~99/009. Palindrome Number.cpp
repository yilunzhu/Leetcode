class Solution {
public:
    bool isPalindrome(int x) {
        int r = 0;
        int t;
        int y = x;
        while(x != 0) {
            t = x % 10;
            r = 10 * r + t;
            x = x / 10;
        }
        return ((y == r) && y>=0);
    }
};

