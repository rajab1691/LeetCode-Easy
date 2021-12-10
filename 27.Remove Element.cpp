/*
  T.C-O(n)
  S.C-O(1)
  use an extra variable,if elem becomes unequal don't insert that
*/
 int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        
        int j=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[j++]=nums[i];
            }
        }
        return j;
    }
