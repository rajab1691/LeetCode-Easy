/*
    T.C-O(n)
    S.C-O(1)
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>res;
        
        int carry=0;
        //handle last case explicitly
        if(digits[n-1]==9){
            digits[n-1]=0;
            carry=1;
        }else{
            digits[n-1]+=1;
        }
        
        for(int i=n-2;i>=0;i--){
            digits[i]+=carry;
            if(digits[i]==10){
                digits[i]=0;
                carry=1;
            }else{
                carry=0;
            }
        }
        if(carry){
            res.push_back(carry);
        }
        for(int i=0;i<n;i++){
            res.push_back(digits[i]);
        }
        return res;
    }
};

