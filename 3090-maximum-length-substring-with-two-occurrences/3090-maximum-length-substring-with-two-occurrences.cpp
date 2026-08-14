class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mpp;
        int left=0,longest=0,temp=0;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]]>2){
                while(mpp[s[i]]>2){
                    mpp[s[left]]--;
                    left++;
                    temp--;
                }
            }
            temp++;
            longest=max(longest,temp);
        }
        return longest;
        
    }
};