class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++) {
            if (a > 0 && nums[a] == nums[a - 1]) {
                continue;
            }
            for (int b = a + 1; b < nums.size(); b++) {
                if (b > a + 1 && nums[b] == nums[b - 1]) {
                    continue;
                }

                int c = b + 1;
                int d = nums.size() - 1;
                while (c < d) {
                    long long sum = static_cast<long long>(nums[a]) + static_cast<long long>(nums[b]) + static_cast<long long>(nums[c]) + static_cast<long long>(nums[d]);
                    if (sum == target) {
                        result.push_back({nums[a], nums[b], nums[c], nums[d]});

                        while (c < d && nums[c] == nums[c + 1]) {
                            c++;
                        }
                        while (c < d && nums[d] == nums[d - 1]) {
                            d--;
                        }
                        c++;
                        d--;
                    } else if (sum < target) {
                        c++;
                    } else {
                        d--;
                    }
                }
            }
        }
        return result;
    }
};