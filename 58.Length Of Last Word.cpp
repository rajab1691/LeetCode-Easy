/*
   Traverse from end
    T.C-O(n)
    S.C-O(1)
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        
        int i=n-1;
        int cnt=0;
        //decrement till it is last char
        while(i>=0 and s[i]==' ')
            i--;
        //count the length
         while(i>=0 and s[i]!=' '){
             cnt++;
             i--;
        }
        
        return cnt;
    }
};
