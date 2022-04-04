/*class Solution {
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
};*/
    
// wrong answer.
class Solution {
public:
    double average(vector<int>& salary) {
        int total = 0;
        int mi = numeric_limits<int>::max(), ma = numeric_limits<int>::min();
        for (const auto& s : salary) {
            total += s;
            mi = min(mi, s), ma = max(ma, s);
        }
        return double(total - mi - ma) / (salary.size() - 2);
    }
};

// Time:  O(n)
// Space: O(1)
// one-liner solution
class Solution2 {
public:
    double average(vector<int>& salary) {
        return (accumulate(cbegin(salary), cend(salary), 0.0) - 
                *min_element(cbegin(salary), cend(salary)) -
                *max_element(cbegin(salary), cend(salary)))
               / (salary.size() - 2);
    }
};
