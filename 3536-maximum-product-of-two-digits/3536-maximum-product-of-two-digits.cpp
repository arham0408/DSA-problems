class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        while(n>0){
            int temp=n%10;
            nums.push_back(temp);
            n=n/10;
        }
        int i=0,j=nums.size()-1,ans=0;
        while(i<j){
            int mul=nums[i]*nums[j];
            ans=max(mul,ans);
            if(nums[i]<nums[j]) i++;
            else j--;
        }
        return ans;
    }
};