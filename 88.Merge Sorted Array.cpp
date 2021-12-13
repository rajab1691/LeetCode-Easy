/*
  1.Start merging from last index to first
  T.C-O(n)
  S.C-O(1)
*/
void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
            
        //put k at last index of final merged array    
        int k=m+n-1;
        int i=n-1;
        int j=m-1;
        
        while(i>=0 and j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k--]=nums1[i--];
            }else{
                nums1[k--]=nums2[j--];
            }
        }
        
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
        
    }
