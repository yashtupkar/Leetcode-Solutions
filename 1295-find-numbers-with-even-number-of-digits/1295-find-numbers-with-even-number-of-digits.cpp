class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount = 0;
        int n = nums.size();
        for (int i=0; i<n;i++){
            int digits = to_string(nums[i]).length();
             if(digits%2==0){
                evenCount++;
             }
        }
        return evenCount;
    }
};