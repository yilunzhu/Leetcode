class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i, j;
        string s;
        if(strs.size() == 0)
            return s;
        s = strs[0];
        for (i = 1; i < strs.size(); i++) {
            for (j = 0; j < (s.length() < strs[i].length()) ? s.length() : strs[i].length(); j++)
                if (s[j] != strs[i][j])
                    break;
            s.resize(j);
        }
        return s;
    }
};
