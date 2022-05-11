class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
  
    vector<int> merged;
    short size1 = nums1.size();
    short size2 = nums2.size();
    short total_size = size1 + size2;
    short counter = 0;
    short counter2 = 0;
    int ret = 0;
    
    
    while(counter < nums1.size() && counter2 < nums2.size()){

        
        if(nums1[counter] < nums2[counter2]){
            merged.push_back(nums1[counter]);
            counter++;
            continue;
        }if(nums1[counter] == nums2[counter2]){
            merged.push_back(nums1[counter]);
            merged.push_back(nums2[counter2]);
            counter++;
            counter2++;
            continue;
        }if(nums1[counter] > nums2[counter2]){
            merged.push_back(nums2[counter2]);
            counter2++;
            continue;
        }
         
    }
    if(counter < nums1.size()){
        merged.insert(merged.end(),nums1.begin() + counter, nums1.end());
    }
    if(counter2 < nums2.size()){
        merged.insert(merged.end(),nums2.begin() + counter2, nums2.end());
    }
    
    if(total_size%2 == 0){
        ret = merged[total_size/2 - 1] + merged[total_size/2];
        return static_cast<double>(ret) / 2.0;
    }else{
        ret = merged[total_size/2];
        return static_cast<double>(ret);
    }
    
}
