/*
    1.Use Sorting- T.C-O(nlogn)
    2.Use hashmap- T.C-O(n) and S.C-O(n)  
*/
bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        return (s.size()<n);
    }
