//LINK: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 1;
        while (right < n) {
            if (nums[left] == nums[right]) {
                right++;

            } else {
                nums[++left] = nums[right++];
            }
        }
        return left + 1;
    }
};
