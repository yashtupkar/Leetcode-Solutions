class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sum=0;
        int minLen = nums.size()+1;

        for (int right =0; right<nums.size();right++){
            sum += nums[right];

             while (sum >= target) {
                int len = right - left + 1;
                minLen = min(minLen, len);

                sum -= nums[left];
                left++;
            }
        }
        
          return minLen == nums.size() + 1 ? 0 : minLen;
    }
};