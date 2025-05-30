class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right=nums.size()-1;
        for(int i=0;i<nums.size();){
            if(nums[i]==val){
                nums[i]='_';
                swap(nums[i],nums[right]);
                right--;
            }
            else{
                i++;
            }
           } 
        return right+1;  
    }
};