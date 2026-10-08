class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        vector<int> res;

        for(int i=0; i<nums1.size(); i++){
            if(set.find(nums1[i]) == set.end()){
              set.insert(nums1[i]);
            }
        }
        for(int j=0; j<nums2.size(); j++){
            if(set.find(nums2[j])!=set.end()){
                res.push_back(nums2[j]);
                set.erase(nums2[j]);
            }
        }
        return res;
        
    }
};