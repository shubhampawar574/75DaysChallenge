class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=0;
        int n= nums.size();
        for(;i<n-1; i++){
            if(nums[i]!=nums[i+1])
                nums[j++]=nums[i];
        }
        nums[j++]=nums[n-1];
        return j;
    }
};
