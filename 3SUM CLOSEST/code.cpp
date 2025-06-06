class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestsum = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(sum - target) < abs(closestsum - target)) {
                    closestsum = sum;

                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return closestsum;
    }
};