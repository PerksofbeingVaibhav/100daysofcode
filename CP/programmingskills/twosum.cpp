class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++) {
            if((it=m.find(target-nums[i])) != m.end()) {
                return {it->second,i};
            }
            m[nums[i]]=i;
        }
        return {0,0};
    }
};
