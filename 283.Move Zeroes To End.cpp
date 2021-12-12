/*
  1.Use an extra variable approach
  T.C-O(n)
  S.C-O(1)
*/
void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        
        int i=0;
        int j=0;
        //for counting zeroes
        int cnt=0;
        while(i<n){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }else{
                cnt++;
            }
            i++;
        }
        while(cnt--){
            nums[j++]=0;
        }
    }
