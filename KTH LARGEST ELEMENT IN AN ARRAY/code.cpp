class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int count=0;
        sort(nums.begin(),nums.end(),greater<int>());
      for(int i=0;i<nums.size();i++){
          
              count++;
              if(count==k){
                return nums[i];
              }
            
        }
        return nums[0];
    }   
};