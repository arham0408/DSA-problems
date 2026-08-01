class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> temp(freq.begin(),freq.end());
        sort(temp.begin(),temp.end(), [] (auto &a,auto &b){
            return a.second>b.second;
        });
        for(int j=0;j<k;j++){
            result.push_back(temp[j].first);

        }
        return result;
        
    }
};
