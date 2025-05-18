class Solution {
public:
    int reversed(int nums) {
        int reverse = 0;
        while (nums > 0) {
            int digit = nums % 10;
            reverse = reverse * 10 + digit;
            nums /= 10;
        }
        return reverse;
    }

    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> distinct_nums(nums.begin(), nums.end());

        for (int num : nums) {
            distinct_nums.insert(reversed(num));
        }

        return distinct_nums.size();
    }
};