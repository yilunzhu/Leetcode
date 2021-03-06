class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> vv;
        if (nums.size() < 3)
            return vv;
        sort (nums.begin(), nums.end());
        int i = 0, j, k;
        for (; i < nums.size() - 2; i++) {
            j = i + 1;
            k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] < 0)
                    j++;
                else if(nums[i] + nums[j] + nums[k] > 0)
                    k--;
                else {
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    vv.push_back(v);
                    for (; j < k && v[1] == nums[j]; j++);
                    for (; j < k && v[2] == nums[k]; k--);
                    v.clear();
                }
                for(; i < nums.size() - 3 && nums[i] == nums[i + 1]; i++);
            }
        }
        return vv;
    }
};
