/*
  Just a use an extra variable and put that on starting index
  and increment that whenever two elements becomes unequal
  T.C-O(n)
  S.C-O(1)
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        
        
        int j=0;
        
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[j++]=nums[i];
            }
        }
        nums[j++]=nums[n-1];
        return j;
    }
};
