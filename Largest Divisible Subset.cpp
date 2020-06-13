class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n  = nums.size();
        if(n==0||n==1)return nums;
        sort(nums.begin(),nums.end());
        vector<int>count(n,1);
        for(int i  = 1 ;i<n;i++)
        {
            for(int j = i-1;j>=0;j--)
            {
                if(nums[i]%nums[j]==0)
                   count[i] = max(count[i], count[j]+1);
            }
        }
        int index = 0;
        for(int i = 0  ;i<count.size();i++)
            index = count[i]>count[index]?i:index;
        
        vector<int>ans;
          int k = 1;
        for(int i  = 0; i <=index;i++)
        {
            if(nums[index]%nums[i]==0 && count[i]==k )
            {ans.push_back(nums[i]);
             k++;}
        }
        
       return ans;
    }
};