class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> ind;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (ind.count(target - nums[i]) != 0) {
                return vector<int>{i, ind[target - nums[i]]};
            }

            ind[nums[i]] = i;
        }
        return vector<int>{-1, -1};
    }
};