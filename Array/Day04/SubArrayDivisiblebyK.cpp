//LINK: https://leetcode.com/problems/subarray-sums-divisible-by-k/
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixSum = 0, count = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        for (int num : nums) {
            prefixSum += num;
            int mod = prefixSum % k;
            if (mod < 0)
                mod += k;
            if (mpp.find(mod) != mpp.end()) {
                count += mpp[mod];
                mpp[mod] += 1;
            } else {
                mpp[mod] = 1;
            }
        }
        return count;
    }
};
