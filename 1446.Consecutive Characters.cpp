/*
      1.The idea is to keep a max variable and count consecutive char,and update max 
     T.C-O(n)
     S.C-O(1)

*/
class Solution {
public:
    int maxPower(string s) {
        int n=s.length();
        //minimum ans will always be 1
        int maxi=1;
        
        for(int i=0;i<n-1;i++){
            int cnt=0;
           //keep counting till the consecutive char becomes unequal
            while(i+1<n and s[i]==s[i+1]){
                cnt++;
                i++;
            } 
           //taking cnt+1 because we haven't counted the last char
            maxi=max(maxi,cnt+1);
        }
        return maxi;
    }
};
