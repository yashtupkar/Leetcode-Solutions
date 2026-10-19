
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        // Step 1: Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Step 2: Find the first non-repeating character
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
