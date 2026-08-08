class Solution {
public:
    string removeStars(string s) {
        stack<char> temp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*') temp.pop();
            else temp.push(s[i]);
        }
        string ans;
        while(!temp.empty()){
            ans+=temp.top();
            temp.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;


    }
};