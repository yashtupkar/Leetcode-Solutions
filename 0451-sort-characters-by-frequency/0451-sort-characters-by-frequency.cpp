class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for(char c: s){
            freq[c]++;
        }
        vector<vector<char>> bucket(s.size()+1);

        for (auto &p : freq){
            bucket[p.second].push_back(p.first);
        }

        string ans = "";

        for (int i = s.size(); i>=1; i--){
            for(char c: bucket[i]){
                ans+=string(freq[c],c);
            }
        }



        return ans;
    }
};