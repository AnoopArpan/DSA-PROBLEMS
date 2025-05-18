class Solution {
public:
    int jump(vector<int>& nums) {
       int maxreach=0;
       int jump=0;
       int lastjump=0;
        for(int i=0;i<nums.size()-1;i++){
            maxreach=max(maxreach,i+nums[i]);
            if(i==lastjump){
                jump++;
                lastjump=maxreach;
                if(lastjump>nums.size()-1){
                    break;
                }
            }
        }
        return jump;
    }
};