/*
    T.C-O(n)
    S.C-O(n)
*/
class Solution {
public:
    int romanToInt(string s) {
        
        //use hashmap to map char and its int
        unordered_map<char,int>mp;
        
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        int res=0;
        int i;
        for(i=0;i<s.length()-1;i++){
            //if IV=(5-1)
            if(mp[s[i]]<mp[s[i+1]]){
                res+=mp[s[i+1]]-mp[s[i]];
                i++;
            }
            //if VI=(5+1)
            else{
                res+=mp[s[i]];
            }
        }
        if(i<s.length()){
            res+=mp[s[i]];
        }
        return res;
    }
};

