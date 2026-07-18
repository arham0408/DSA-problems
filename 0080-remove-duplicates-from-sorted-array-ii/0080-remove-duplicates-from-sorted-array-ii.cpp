class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
                if(count>2){
                    nums.erase(nums.begin()+i+1);
                    i--;
                }
            }
            else count=1;
        }
        int k=nums.size();
        return k;
        
        
    }
};