/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        //int pick=0;
        int high=n;
        int low=1;
        int pick;
        while(low<=high){
             pick=low+(high-low)/2;
            int g=guess(pick); // api used.
            if(g==-1){
                high=pick-1;
               // return 1;
            }
            else if(g==0){
                cout<<pick;
                break;
            }
            else if(g==1){
                low=pick+1;
                //pick=(low+high)/2;
               // return 1;
            }
        }
        /*if(low>high){
            return -1;
        }*/
        return pick;
        
    }
};
