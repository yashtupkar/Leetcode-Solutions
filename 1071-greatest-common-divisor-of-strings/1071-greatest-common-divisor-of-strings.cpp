class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       
         int g = gcd(str1.size(), str2.size());

          if(str1+str2 != str2+str1){
            return "";
          }else{
                string gcString;
                for(int i=0;i< g;i++){
                gcString += str1[i];
          }
            return gcString;
          }

         
    }
};