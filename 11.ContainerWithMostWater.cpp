class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int res=INT_MIN;
        
        while(start<=end){
            res=max(res, (end-start)*min(height[end], height[start]));
            
            if(height[start] < height[end])
                start++;
            else
                end--;
        }
        
        return res;
    }
};
