/*
  Anagram:a word or phrase that is made by arranging the letters of another word or phrase in a different order
  1.Use a vector of size 26,for first string increment count and for 2nd string decrement count
  T.C-O(n)
  S.C-O(26)
*/
bool isAnagram(string s, string t) {
        vector<int>v(26,0);
        
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        
        for(int i=0;i<t.length();i++){
            v[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++){
            if(v[i]!=0)return false;
        }
        return true;   
    }
