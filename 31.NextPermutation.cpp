class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int infection_point=0;
        
        for(int i=n-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                infection_point=i;
                break;
            }
        }
        
        if(infection_point==0){
            sort(nums.begin(), nums.end());
            
        }
        
        else{
            int min=INT_MAX;
            
            int to_swap=nums[infection_point-1];
            // int swap_with;
            for(int j=infection_point; j<n; j++){
                if((nums[j]-to_swap) > 0 && (nums[j]-to_swap) < min){
                    // swap_with=nums[j];
                    int temp=nums[j];
                    nums[j]=nums[infection_point-1];
                    nums[infection_point-1]=temp;
                }
            }
            
            sort(nums.begin()+infection_point, nums.end());
        }
    }
};
