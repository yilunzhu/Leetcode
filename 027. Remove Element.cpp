class Solution {
public:
    int removeElement(vector<int>& n, int val) {
        int l = 0;
        for (int i = 0; i < n.size(); i++)
            if (n[i] != val) {
                n[l] = n[i];
                l++;
            }
        return l;
    }
};
