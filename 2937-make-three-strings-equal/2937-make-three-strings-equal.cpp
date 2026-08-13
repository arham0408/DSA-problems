class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        if(s1[0]!=s2[0]||s1[0]!=s3[0]||s2[0]!=s3[0]) return -1;
        int count=0;
        int n=min({s1.size(),s2.size(),s3.size()});
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]&&s1[i]==s3[i]&&s2[i]==s3[i]) count++;
            else break;
        }
        int total=(s1.size()-count)+(s2.size()-count)+(s3.size()-count);
        return total;
    }
};