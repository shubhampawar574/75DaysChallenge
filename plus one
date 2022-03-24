class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
//         long int num=0;
        
//         int n=digits.size();
//         for(int i=0; i<n; i++){
//             num=num*10+digits[i];
//         }
        
//         long int res = num+1;
//         vector<int> ans;
//         while(res>0){
//             ans.push_back(res%10);
//             res/=10;
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
        
        int idx=digits.size()-1;
        while(idx>=0){
            if(digits[idx]==9)
                digits[idx]=0;
            else{
                digits[idx]+=1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
