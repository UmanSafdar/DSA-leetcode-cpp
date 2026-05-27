class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> mystr;
        
        if(s==""){
            return true;
        }
        for(char c :s){
            if(isalnum(c)){
                if(isalpha(c)){
                    c=tolower(c);
                mystr.push_back(c);
                }
                else{
                    mystr.push_back(c);
                }  
            } 
        }
        int n = mystr.size();
       for(int i =0; i< n/2; i++){
        if(mystr[i] != mystr[(n-1)-i]){
                return false;
        }
       }
        
            
        
        return true;
    }
};