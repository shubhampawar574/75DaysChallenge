class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        //O(NLOGN)
        // for(auto &i: nums){
        //     i = i*i;
        // }
        // sort(nums.begin(), nums.end());
        // return nums;
        
        //O(n)
        vector<int> res(nums.size());
        int low=0, high=nums.size()-1;
        for(int i=nums.size()-1; i>=0; i--){
            if(abs(nums[low])>abs(nums[high])){
                res[i]=nums[low]*nums[low];
                low++;
            }
            else{
                res[i]=nums[high]*nums[high];
                high--;
            }
        }
        return res;
    }
};
