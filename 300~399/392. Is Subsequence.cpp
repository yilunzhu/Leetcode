class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (i < t.length()) {
            if (t[i] == s[j])
                j++;
            i++;
            if (j == s.length())
                return true;
        }
        return j == s.length();
    }
};
