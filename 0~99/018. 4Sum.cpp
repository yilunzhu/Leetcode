class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& n, int t) {
        vector<vector<int>> vv;
        int i = 0, j, k, l;
        sort(n.begin(), n.end());
        for (; i < n.size(); i++) {
            for (j = i + 1; j < n.size(); j++) {
                k = j + 1;
                l = n.size() - 1;
                while (k < l) {
                    if (n[i] + n[j] + n[k] + n[l] > t)
                        l--;
                    else if (n[i] + n[j] + n[k] + n[l] < t)
                        k++;
                    else {
                        vector<int> v;
                        v.push_back(n[i]);
                        v.push_back(n[j]);
                        v.push_back(n[k]);
                        v.push_back(n[l]);
                        vv.push_back(v);
                        while (k < l && n[k] == n[k + 1])
                            k++;
                        while (k < l && n[l] == n[l - 1])
                            l--;
                        k++;
                        l--;
                    }
                }
                while (j < n.size() && n[j] == n[j + 1])
                    j++;
            }
            while (i < n.size() && n[i] == n[i + 1])
                    i++;
        }
        return vv;
    }
};
