class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sort all the word then compare to other

        unordered_map<string,vector<string>> mp;
        for(string s: strs){
            string key = s;
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }
        vector<vector<string>> ans;

        for(auto &it :mp){
            ans.push_back(it.second);
        }

        return ans;

        }

};