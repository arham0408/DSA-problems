class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> st;
        int longest=0,left=0;
        for(int i=0;i<nums.size();i++){
            st[nums[i]]++;
            if(st[nums[i]]>k){
                while(st[nums[i]]>k){
                    st[nums[left]]--;
                    left++;
                }
            }    
            longest=max(longest,i-left+1);    
            
        }
        return longest;
    }
};