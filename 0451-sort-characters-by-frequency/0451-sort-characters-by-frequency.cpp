class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<char,int>> temp(freq.begin(),freq.end());
        sort(temp.begin(), temp.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        string z;
        for(auto i:temp){
            z+=string(i.second,i.first);
        }
        return z;
        
    }
};