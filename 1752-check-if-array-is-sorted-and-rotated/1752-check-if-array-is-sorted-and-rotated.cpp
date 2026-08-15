class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.empty()) return true;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1) % nums.size()]){
                count++;
            }
        }
        if(count<2) return true;
        else return false; 
    }
};