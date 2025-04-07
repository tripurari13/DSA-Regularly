class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        // If the total sum is odd, we cannot split it into two equal subsets
        if (totalSum % 2 != 0) return false;

        int target = totalSum / 2;
        bitset<10001> dp(1); // dp[0] = true

        for (int num : nums) {
            dp |= dp << num;
        }

        return dp[target];
    }
};
