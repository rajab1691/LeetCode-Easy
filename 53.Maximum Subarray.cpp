/*
  Input: nums = [5,4,-1,7,8]
  Output: 23
*/
/*
  1. Using Divide and Conquer
  T.C-O(nlogn)
  Algo:
     a.divide the array into two halves
     b.cal left sum,right sum & cross sum(some from left,some from right)
     c.return maximum of all three
*/
class Solution {
  public:

    int crossSum(vector<int>&nums,int l,int mid,int h) {

      int lSum = INT_MIN;
      int sum = 0;

      for (int i = mid; i >= l; i--) {
        sum += nums[i];
        lSum = max(lSum, sum);
      }
      sum = 0;
      int rSum = INT_MIN;

      for (int i = mid + 1; i <= h; i++) {
        sum += nums[i];
        rSum = max(rSum, sum);
      }

      return (max(lSum, (max(rSum, lSum + rSum))));
    }

  int subSum(vector<int>&nums,int l,int h) {

    if (l == h)
      return nums[l];

    int mid = l + (h - l) / 2;

    return max(subSum(nums, l, mid), max(subSum(nums, mid + 1, h), crossSum(nums, l, mid, h)));
  }
  int maxSubArray(vector<int>&nums) {
    int n = nums.size();
    return subSum(nums, 0, n - 1);
  }
};

/*
   T.C-O(n)
   Algo:
      a. take two variables local maxima,global maxima
      b. start updating your global maxima
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxi=nums[0];
        int currMax=nums[0];
        
        for(int i=1;i<nums.size();i++){
            
            currMax=max(nums[i],currMax+nums[i]);
            maxi=max(maxi,currMax);
        }
        return maxi;
    }
};
