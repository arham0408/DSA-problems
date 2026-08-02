class Solution {
public:
    static bool cmp(string a, string b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for (int num : nums) {
            temp.push_back(to_string(num));
        }
        sort(temp.begin(), temp.end(), cmp);
        if (temp[0] == "0")
            return "0";
        string ans = "";
        for (string s : temp) {
            ans += s;
        }
        return ans;
    }
};