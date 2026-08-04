class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mi=nums[0];
        int ma=nums[nums.size()-1];
        vector<int> temp;
        int i=0;
        while(i<nums.size() && mi<=ma){
            if(nums[i]>mi){
                temp.push_back(mi);
                mi++;
            }
            if(nums[i]==mi){
                i++;
                mi++;
            }

        } 
        return temp;       
    }
};