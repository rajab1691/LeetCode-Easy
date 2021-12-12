/*
  1.Use a hashmap to store char and its freq/or can also use 26 size of vector
  T.C-O(n)
  S.C-O(26)
*/
int firstUniqChar(string s) {
       
        int n=s.length();
        vector<int>mp(26,0);
        
        for(int i=0;i<n;i++){
            mp[s[i]-'a']++;
        }
        
        for(int i=0;i<n;i++){
            if(mp[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
