class Solution {
public:
  
  //prefix sum for lsum
    int pivotIndex(vector<int>& nums) {
        int lsum=0, rsum=0;
        for(auto x: nums)
            rsum+=x;
        for(int i=0; i<nums.size(); i++){
            rsum-=nums[i];
            
            if(lsum==rsum)
                return i;
            
            lsum+=nums[i];
        }
        
        return -1;
    }
};
