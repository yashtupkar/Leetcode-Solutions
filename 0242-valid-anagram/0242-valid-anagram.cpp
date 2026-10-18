class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
      unordered_map<char, int> mp;

      for(char c: s){
        mp[c]++;
      }

          for (char ch : t) {
            if (mp[ch] == 0) {
                return false;
            }

            mp[ch]--;
        }

        return true;


    }
};