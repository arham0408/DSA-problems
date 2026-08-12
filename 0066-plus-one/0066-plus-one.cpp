class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a=digits[digits.size()-1];
        if(a<9){
            a++;
            digits.pop_back();
            digits.push_back(a);
        }
        else{
            int i=0;
           while(i < digits.size() && digits[digits.size()-1-i] == 9){
                i++;
            }
            if(digits.size()>i){
                for(int j=0;j<i;j++){
                    digits.pop_back();   
                }
                int b=digits[digits.size()-1];
                b++;
                digits.pop_back(); 
                digits.push_back(b);
                for(int j=0;j<i;j++){
                    digits.push_back(0);
                }
            }
            else{
                for(int j=0;j<i;j++){
                    digits.pop_back();    
                }
                digits.push_back(1);
                for(int j=0;j<i;j++){
                    digits.push_back(0);
                }
            }
        }
        return digits;
    }
};