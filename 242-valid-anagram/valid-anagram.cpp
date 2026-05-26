class Solution {
public:
    bool isAnagram(string s, string t) {
        int x = s.length();
        int y = t.length();
        if(x!=y){
           return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
    for(int i=0; i<x; i++){
        if(s[i]!=t[i]){
            return false;
            }
        }
        return true;
    }
};