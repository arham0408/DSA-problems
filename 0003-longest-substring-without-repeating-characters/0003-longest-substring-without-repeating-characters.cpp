class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> st;
        int longest=0,temp=0,left=0;
        for(int i=0;i<s.length();i++){
            if(st[s[i]]>0){
                while(st[s[i]]>0){
                    st[s[left]]--;
                    left++;
                    temp--;
                }
            }
            st[s[i]]++;
            temp++;
            longest=max(longest,temp);
        }
        longest=max(longest,temp);
        return longest;
        
    }
};