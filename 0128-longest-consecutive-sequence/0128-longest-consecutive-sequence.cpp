class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=1,i=0,j=1;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        for(i;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                count++;
                j=max(j,count);
            }
            else if(nums[i]==nums[i+1]) continue;
            else{
                count=1;
            }


        }
        return j;
        
    }
};