class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mapS(256,0);

        vector<int> mapT(256,0);

           for (int i=0; i<s.size(); i++){
            unsigned char c1= s[i];
            unsigned char c2 = t[i];

            if(mapS[c1]!= mapT[c2]){
                return false;
            }
            mapS[c1] = i+1;
            mapT[c2] = i+1;
           }

           return true;
    }
};