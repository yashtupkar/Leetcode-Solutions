class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans(nums.size());
        int n=nums.size();

         int prefix =1;
        for ( int i=0; i<n; i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int sufix = 1;
        for(int i=n-1; i>=0; i--){
            ans[i] *= sufix;
            sufix *= nums[i];
        }

       

        return ans;
        
    }
};