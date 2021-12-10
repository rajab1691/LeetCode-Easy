/*
  T.C-O(logn)
  S.C-O(1)
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        
        int l=0,h=n-1;
        
        int ans=n;
        
        while(l<=h){
            int mid=l+(h-l)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                h=mid-1;
                ans=mid;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};

