
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        // Count available letters in magazine
        for (char ch : magazine) {
            mp[ch]++;
        }

        // Use letters to construct ransomNote
        for (char ch : ransomNote) {
            if (mp[ch] == 0) {
                return false;
            }

            mp[ch]--;
        }

        return true;
    }
};
