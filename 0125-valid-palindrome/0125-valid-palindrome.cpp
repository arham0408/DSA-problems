class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(char c: s){
            if(isalnum(c)){
                temp+= tolower(c);
            }            
        }
        int a=0;
        int b=temp.length()-1;
        while(a<b){
            if(temp[a]!=temp[b]){
                return false;
            }
            a++;
            b--;
        }
        return true;
        
    }
};