class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> nums1,nums2;
        int a=0,b=0;
        nums1.push_back(nums[0]);
        nums2.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(nums1[a]>nums2[b]){
                nums1.push_back(nums[i]);
                a++;
            }
            else{
                nums2.push_back(nums[i]);
                b++;
            }
        }
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        return nums1;
        
    }
};