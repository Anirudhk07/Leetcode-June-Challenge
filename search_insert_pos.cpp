//EFFICIENT METHOD 1

#include<vector>
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int l = 0 , r = nums.size()-1;
        while(l<=r)
     {
         int mid = l+(r-l)/2;
         if(target == nums[mid])
             return mid;
            if(target>nums[mid])
            l = mid+1;
        
         if(target<nums[mid])
             r = mid-1;
     }
            return l;
        
    }
};

//METHOD 2

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        while(i < nums.size() && target > nums[i]){
            ++i;
        }
        return i;
    }
};


//METHOD 3 

NOTE : FIND SYNTAX IS DIFF IN VECTOR



