class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size() + nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(), nums2.end(),merged.begin());

  
  int m = merged.size();
 if(m%2 != 0){
				
				
                double median = merged[m/2];
				return median;
 }
 else{
 	int val1 = merged[m/2];
 	double val2 = merged[m/2 - 1];
 	
    double result = (val1 + val2) / 2.0;
    return result;

 }
    }
};