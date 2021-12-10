/*
    T.C-O(n)
    S.C-O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        
        int n=nums.size();
        
        //map has array elem mapped with its index
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            //a+b=sum
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                res.push_back(i);
                res.push_back(mp[temp]);
            }else{
                mp[nums[i]]=i;
            }
        }
        return res;
    }
};
