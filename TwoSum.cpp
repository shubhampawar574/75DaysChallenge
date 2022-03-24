class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> res;
        
//         for(int i=0; i<nums.size(); i++){
//             int first = nums[i];
//             for(int j=i+1; j<nums.size(); j++){
//                 if((target - nums[i]) == nums[j]){
//                     res.push_back(i);
//                     res.push_back(j);
//                 }
//             }
//         }
        
//         return res;
        
        unordered_map<int, int>mp;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(target-nums[i]) != mp.end()){
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);
            
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};
