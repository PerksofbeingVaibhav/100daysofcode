class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
       int n=nums.size();
      vector<bool> vec;
      int num=0; 
      for(int i=0;i<n;i++)
      {
         num=(num*2+nums[i])%10;
         vec.push_back(num%5==0);
      }
    return vec;  
    }
};
