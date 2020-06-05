class Solution {
int sum;
vector<int>v;
    public:
    Solution(vector<int>& w) {
        sum = 0 ;
        for(int x:w)
        {
            sum+=x;
            v.push_back(sum);
        }
        
    }
    
    int pickIndex() {
       int index = rand()%sum; 
        return binarySearch(index+1);
    }
    int binarySearch(int val)
    {
        int l = 0;
        int r = v.size()-1;
        while(l<r)
        {
            int mid = l+(r-l)/2;
            if(v[mid]<val)
            {
                l = mid+1;
            }
            else
            {
                r = mid;
            }
        }
        return l;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */