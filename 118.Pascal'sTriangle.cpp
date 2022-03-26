class Solution {
public:
    vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> res;
//         res.push_back({1});
//         if(numRows==1)
//             return res;
        
//         res.push_back({1, 1});
//         if(numRows==2)
//             return res;
//         for(int i=2; i<numRows; i++){
//             vector<int> rowVec(i+1);
//             rowVec[0] = rowVec[i] = 1;
//             for(int j=1; j<i; j++){
                
//                 rowVec[j] = res[i-1][j-1] + res[i-1][j];
                       
//             }
//             res.push_back(rowVec);
//         }
        
//         return res;
        
        int n=numRows;
        vector<vector<int>> ans;
        ans.push_back({1});
        if(n==1)
            return ans; 
        ans.push_back({1,1});
        if(n==2)
            return ans;
        for(int i=2;i<n;i++)
        {
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++)
            {
                temp[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};
