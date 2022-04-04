class Solution {
public:
    int countOdds(int low, int high) {
        /*int cnt=0;
        for(int i=low; i<=high;i++){
            if(i%2){
                cnt++;}
        }
        return cnt;*/
        if(high-low==1){
            return 1;
        }
        int ans=0;
        int dif= high-low+1;
        if(low%2 && high%2){
            ans=(dif/2)+1;
        }
        else{
            ans=dif/2;
        }
        return ans;
    }
};