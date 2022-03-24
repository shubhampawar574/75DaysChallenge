class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //move zeros to end
        int start=0;
        int end = 0;
        
        while(end<nums.size()){
            if(nums[end] != 0){
                swap(nums[start], nums[end]);
                start++;
            }
            end++;
        }
        
        //move zero to start
//         int start=nums.size()-1;
//         int end = nums.size()-1;
        
//         while(end>=0){
//             if(nums[end] != 0){
//                 swap(nums[start], nums[end]);
//                 start--;
//             }
//             end--;
//         }
        
    }
};
