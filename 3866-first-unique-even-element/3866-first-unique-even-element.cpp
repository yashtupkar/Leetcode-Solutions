class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int freq[101] = {0};

        // Step 1: Count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Find the first unique even number
        for (int num : nums) {
            if (num % 2 == 0 && freq[num] == 1) {
                return num;
            }
        }

        // Step 3: No valid number found
        return -1;
    }
};