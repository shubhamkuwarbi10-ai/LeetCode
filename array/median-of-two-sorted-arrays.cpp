class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        int m=nums1.size(),n=nums2.size();
	// Merging the two arrays
	    for (int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
    // sorts the array
        sort(nums1.begin(),nums1.end());
	    int mid=(m+n)/2;
        if ((m+n)%2==0){
            return median=(nums1[mid]+nums1[mid-1])/2.0;
        }
        else return median=nums1[mid];
    }
};