class Solution {
public:
    int calculate(string s) {
        long number=0,result=0,sign=1;
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                number=number*10+(s[i]-'0');
            }
            if(s[i]=='+'){
                result+=number*sign;
                number=0;
                sign=1;
            }
            if(s[i]=='-'){
                result+=number*sign;
                number=0;
                sign=-1;
            }
            if(s[i]=='('){
                st.push(result);
                st.push(sign);
                number=0;sign=1;result=0;
            }
            if(s[i]==')'){
                result+=number*sign;
                number=0;sign=1;
                result*=st.top(); st.pop();
                result+=st.top();st.pop();
            }
        }
        result+=number*sign;
        return result;
        
    }
};