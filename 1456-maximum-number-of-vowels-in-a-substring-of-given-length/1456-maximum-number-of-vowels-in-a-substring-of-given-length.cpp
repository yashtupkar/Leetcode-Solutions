
class Solution {
public:
    int maxVowels(string s, int k) {
        int vowelCount = 0;

        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vowelCount++;
            }
        }

        int maxVowel = vowelCount;

        // Slide the window
        for (int i = k; i < s.length(); i++) {

            // Remove the outgoing character
            if (s[i - k] == 'a' || s[i - k] == 'e' ||
                s[i - k] == 'i' || s[i - k] == 'o' ||
                s[i - k] == 'u') {
                vowelCount--;
            }

            // Add the incoming character
            if (s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vowelCount++;
            }

            maxVowel = max(maxVowel, vowelCount);

            // Optional optimization: maximum possible is k
            if (maxVowel == k) {
                return k;
            }
        }

        return maxVowel;
    }
};
