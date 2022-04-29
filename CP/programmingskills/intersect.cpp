class Solution {
public:
    
    int findUsingBinarySearch(vector<int>& nums2,int target) 
    {
        int l=0;int h=nums2.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(target==nums2[mid])
                return mid;
            else if(target<nums2[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return -1;
        
    }
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
     
    
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<n1;i++)
        {
            int ind=findUsingBinarySearch(nums2,nums1[i]);
            if(ind!=-1)
            {ans.push_back(nums1[i]);
             nums2.erase(nums2.begin()+ind);
            }
        }
       
        return ans;
    }
};
