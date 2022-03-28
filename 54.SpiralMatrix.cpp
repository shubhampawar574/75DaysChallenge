class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
//         vector<int> res;
//         // base case
//         if (matrix.size() == 0) {
//             return res;
//         }

//         int top = 0, bottom = matrix.size() - 1;
//         int left = 0, right = matrix[0].size() - 1;

//         while (1)
//         {
//             if (left > right) {
//                 break;
//             }
//             // print top row
//             for (int i = left; i <= right; i++) {
//                 res.push_back(matrix[top][i]);
//                 // cout << matrix[top][i] << " ";
//             }
//             top++;

//             if (top > bottom) {
//                 break;
//             }
//             // print right column
//             for (int i = top; i <= bottom; i++) {
//                  res.push_back(matrix[i][right]);
//                 // cout << matrix[i][right] << " ";
//             }
//             right--;

//             if (left > right) {
//                 break;
//             }
//             // print bottom row
//             for (int i = right; i >= left; i--) {
//                 res.push_back(matrix[bottom][i]);
//                 // cout << matrix[bottom][i] << " ";
//             }
//             bottom--;

//             if (top > bottom) {
//                 break;
//             }
//             // print left column
//             for (int i = bottom; i >= top; i--) {
//                 res.push_back(matrix[i][left]);
//                 // cout << matrix[i][left] << " ";
//             }
//             left++;
//         }
        
//         return res;
        
        vector<int>ans;
        int rows=0,cols=0,rowe=matrix.size()-1,cole=matrix[0].size()-1;
        while(rows<=rowe && cols<=cole){
            for(int i=cols;i<=cole;i++)ans.push_back(matrix[rows][i]);
            rows++;
            for(int i=rows;i<=rowe;i++)ans.push_back(matrix[i][cole]);
            cole--;
            if(rows<=rowe){
            for(int i=cole;i>=cols;i--)ans.push_back(matrix[rowe][i]);
            rowe--;
            }    
            if(cols<=cole){
                for(int i=rowe;i>=rows;i--)ans.push_back(matrix[i][cols]);
            cols++;
            }
        }
        return ans;
    }
};
