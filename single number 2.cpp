class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int res;
    for(int i  = 0 ; i <32;i++)
    {

 int count  = 0;       
        for(auto x:nums)
        {
            if((x & ( 1<<i ))!=0 ) 
                count++;

        }
        if(count%3==0)
            res = res| (0<<i);
        else
            res = res| (1<<i);

    }
        return res;
    }
};


class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int ones=0;
        int twos = 0;
        int three = 0;
        for(auto x: nums)
        {
            twos = twos|(ones & x);
            ones ^=x;
            three = twos & ones;
            ones &= ~three;
            twos &= ~three;
        }
        return ones;
    }
};