class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int l=0;
      int r=nums.size()-1;
       int res = nums.size();
      while(l<=r){
        int mid=l+(r-l)/2;
        if(target==nums[mid]){
            return mid;
        }
        else if(target<nums[mid]){
            r=mid-1;
        }else{
            res=mid;
            l=mid+1;
        }

      }  
      return l;


    }
};