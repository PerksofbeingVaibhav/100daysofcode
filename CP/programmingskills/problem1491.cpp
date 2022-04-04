class Solution {
public:
    //template<typename T>
    double average(vector<int>& salary) {
       /* double max=*max_element(salary.begin(),salary.end());
        double min= *min_element(salary.begin(),salary.end());
        if(salary.empty()){return 0;}
        double sum=0.0;
        int i;
        for(const T &i:salary){
            sum=(double)i;
        }
        double ans= sum/salary.size();
        double res= ans-min-max;
        return res;*/
     sort(salary.begin(),salary.end());
        vector<int> avg= vector<int> (salary.begin()+1, salary.end()-1);
        return std:: reduce(avg.begin(),avg.end())/avg.size();
    }
};
// wrong answer.
