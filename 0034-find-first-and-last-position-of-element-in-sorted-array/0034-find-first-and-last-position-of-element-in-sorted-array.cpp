class Solution {
public:
    int firstsearch(vector<int>& nums, int target) {
        int a=0,b=nums.size()-1,mid=a+(b-a)/2,ans=-1;
        while(a<=b){           //for first postion
            mid=a+(b-a)/2;
            if(nums[mid]==target){
                ans=mid;
                b=mid-1;
            } 
            else if(target>nums[mid]) a=mid+1;
            else b=mid-1;
        }
        return ans;
    }
    int lastsearch(vector<int>& nums, int target) {
        int a=0,b=nums.size()-1,mid=a+(b-a)/2,ans=-1;
        while(a<=b){           //for first postion
            mid=a+(b-a)/2;
            if(nums[mid]==target){
                ans=mid;
                a=mid+1;
            } 
            else if(target>nums[mid]) a=mid+1;
            else b=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstsearch(nums,target);
        int last=lastsearch(nums,target);
        return {first,last};
    }
};