class Solution{
  public:
  int Search(int vector<int>nums,int target){
    int f=0;
    int l=(nums.size())-1;
    int m=(f+l)/2;
    while(f<=l){
      if(nums[m]<target){
        f=m+1;
       // break;
      }
      else if(nums[m]==target){
        // cout<< target;  // if you wanna print the value;
        cout<<m; // index position of the number;
        break;
      }
      else{
        l=m-1;
        m=(f+l)/2;
      }
      if(f>l){
        return -1;
    }
        return m;
    }
};
