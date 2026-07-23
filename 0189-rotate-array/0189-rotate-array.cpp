class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        k=k%nums.size();
        for(int i=0;i<nums.size();i++){
            if((i+k)>nums.size()-1){
                int a=(i+k)-nums.size();
                temp[a]=nums[i];
            }
            else{
                int a=i+k;
                temp[a]=nums[i];
            }
        }
        for(int j=0;j<temp.size();j++){
            nums[j]=temp[j];
        }       
        
    }
};