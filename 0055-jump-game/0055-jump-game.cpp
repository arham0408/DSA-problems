class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0,i=0;
        while(i<nums.size() && i<=maxreach){
            int reach=nums[i]+i;
            maxreach=max(maxreach,reach);
            i++;
        }
        if(maxreach>=nums.size()-1) return true;
        else return false;
        
    }
};