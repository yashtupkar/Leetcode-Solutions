class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int Max=0;
     for (int i=0;i<accounts.size();i++){
        int customerWealth=0;
        
        for(int j=0; j<accounts[i].size();j++){
          customerWealth += accounts[i][j];
      
        }
            if(customerWealth>Max){
            Max=customerWealth;
          }
     }
     return Max;
        
    }
};