/*
   1.Use XOR of all elem
   T.C-O(n)
   S.C-O(1)
*/
int singleNumber(vector<int>& nums) {
        int n=nums.size();
        
        int xorr=nums[0];
        
        for(int i=1;i<n;i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }
