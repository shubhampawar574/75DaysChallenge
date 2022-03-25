class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         int res;
//         int size = nums.size();
//         int limit = size/2;
//         map<int, int> mp;
//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }
//         for(auto i: mp){
//             if(i.second > limit){
//                 res = i.first;    
//             }
//         }
        
//         return res;
        
        int candidate = INT_MIN;
        int life=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==candidate){
                life++;
            }
            else if(nums[i]!=candidate && life==0){
                candidate=nums[i];
                life++;
            }
            else{
                life--;
            }
        }
        
        return candidate;
        
    }
};
