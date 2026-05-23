class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0  && n == 0){
            return ;
        }

        if ( m == 0){
            nums1 = nums2 ;
            return ;
        }

        if (n == 0){
            return ;
        }
        vector<int> a(m);
        int p = 0;
        while (p < m){
            a[p] = nums1[p];
            p++;
        }
        int i = 0 , j = 0 ,k = 0;
        while ( i < m && j < n){
            if (a[i] <= nums2[j]){
                nums1[k++] = a[i];
                i++;
            }
            else {
                nums1[k++] = nums2[j];
                j++;
            }
        }
        while (i < m){
            nums1[k++] = a[i];
            i++ ;
        }
        while (j < n){
            nums1[k++] = nums2[j];
            j++ ;
        }
        
    }
};