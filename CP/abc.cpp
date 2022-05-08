class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int leftmax[n];
        int rightmax[n];
        leftmax[0]=arr[0];
        for(int i=1;i<n;i++)
            leftmax[i] = max(leftmax[i-1],arr[i]);
        rightmax[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--)
            rightmax[i] = max(rightmax[i+1],arr[i]);
        int res=0;
        for(int i=1;i<n;i++)
            res += min(leftmax[i],rightmax[i])-arr[i];
        return res;
    }
};
