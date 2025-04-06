class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> dp(n, 1);
        int maxIndex = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            if (dp[i] > dp[maxIndex]) {
                maxIndex = i;
            }
        }

        int size = dp[maxIndex];
        vector<int> res;
        for (int i = maxIndex; size > 0; --i) {
            if (nums[maxIndex] % nums[i] == 0 && dp[i] == size) {
                res.push_back(nums[i]);
                maxIndex = i;
                --size;
            }
        }

        return res;
    }
};
