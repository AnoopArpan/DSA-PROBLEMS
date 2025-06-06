class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int difference=0;
     for(int i=1;i<nums.size();i++){
        
         difference=max(difference,nums[i]-nums[i-1]);
     }   
     return difference;
    }
};