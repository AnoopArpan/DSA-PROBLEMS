class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
             return true;
            }
        }
        return false;
    }
};