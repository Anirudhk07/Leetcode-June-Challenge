class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n  = nums.size();
        int index = 0;
        int max  = 0;
        for(int i  = 0 ;i<n;i++)
        {
            int id = nums[i]%n;
            nums[id]+=n;
        }
        for(int i  = 0 ;i<n;i++)
        {
            if(nums[i]>max)
            {
                max = nums[i];
                index = i;
            }
            nums[i]%=n;
        }
        return index;
    }
};