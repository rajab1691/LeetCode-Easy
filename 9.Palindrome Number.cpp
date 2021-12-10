/*  
    T.C-O(n)
    S.C-O(1)
    Use remainder technique
*/
class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)return false;
        int origNum=x;
        long long num=0;
        
        while(x>0){
            int rem=x%10;
            //to avoid overflow
            num=(long long)(num*10)+rem;
            x=x/10;
        }
        if((int)num==origNum){
            return true;
        }
        
        return false;
    }
};


