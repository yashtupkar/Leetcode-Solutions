class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int nsize = flowerbed.size();
        for(int i=0; i<nsize; i++){
            bool current =flowerbed[i];
            bool left,right;
            if(i == 0)
                left = 0;
            else
                left = flowerbed[i-1];

            if(i== nsize-1)
                right = 0;
            else
                right = flowerbed[i+1];

            if(current ==0 && left==0 && right == 0){
                flowerbed[i]=1;
                count++;
            }

        }
        if(count >= n){
            return true;
        }else return false;
        
    }
};