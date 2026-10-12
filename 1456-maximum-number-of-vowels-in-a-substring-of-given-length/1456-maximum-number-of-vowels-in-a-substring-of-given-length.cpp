class Solution {
public:
    int maxVowels(string s, int k) {
        // Step 1: Define a constant-time vowel check
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        // Step 2: Count vowels in the first window
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) count++;
        }

        int answer = count;
        if (answer == k) return k;

        // Step 3: Slide the fixed-size window
        for (int i = k; i < s.size(); i++) {
            count += isVowel(s[i]);
            count -= isVowel(s[i - k]);

            // Step 4: Update the maximum and stop if possible
            answer = max(answer, count);
            if (answer == k) return k;
        }

        // Step 5: Return the maximum vowel count
        return answer;
    }
};