/*
  Problem: At most one Transaction
  Return max profit
*/
/*
  1. Idea is to calculate the maximum difference b/w two number
  2. Considering the 1st number as small
  
  T.C-O(n)
*/
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        
        int maxProfit=0;
        int minElement=INT_MAX;
        
        for(int i=0;i<n;i++){
            minElement=min(minElement,a[i]);
            
            maxProfit=max(maxProfit,a[i]-minElement);
        }
        
        return maxProfit;
    }
};
