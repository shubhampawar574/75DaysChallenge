class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> res;
        
        if(nums.size()<3)
        {
            return res;
        }
        
        
        int j,k, sum;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            //without below statement, TLE (to avoid duplcate elements)
            if(i>0 && nums[i]==nums[i-1])   continue; 
             j=i+1;
             k= nums.size()-1;
            
            while(j<k){
                
                sum = nums[i] + nums[j] + nums[k];
                
                if(sum == 0){
                    res.push_back({nums[i], nums[j], nums[k]});
                    //without below 4 statements, TLE (to avoid duplcate elements)
                    int l=nums[j];
                    while(j<k && nums[j]==l) j++;
                    int r=nums[k];
                    while(j<k && nums[k]==r) k--;
                }
                
                else if(sum>0){
                    k--;
                }
                
                else{
                    j++;
                }
            }
        }
        
        return res;
    }
    
//     vector<vector <int>> v;
//         if (nums.empty()) {
// 		return v;
// 	}
//         if(nums.size()<3)
//         {
//             return v;
//         }
//         sort(nums.begin(),nums.end());
//         for(int i=0 ; i<nums.size()-2 ; i++)
//         {
//          if(i>0 && nums[i]==nums[i-1])   continue;   
//          int j=i+1, k=nums.size()-1;
//             {
//                 while(j<k)
//                 {
//                     if((nums[i]+nums[j]+nums[k])==0)
//                     {
//                         v.push_back({nums[i],nums[j],nums[k]});
//                         int l=nums[j];
//                         while(j<k && nums[j]==l) j++;
//                         int r=nums[k];
//                         while(j<k && nums[k]==r) k--;
//                     }
//                     else if(nums[i]+nums[j]+nums[k]<0) j++;
                    
//                     else if(nums[i]+nums[j]+nums[k]>0) k--;
//                 }
//         }
//         }
        
//     return v;
};
