class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        int setbits=0;
        while(n){
            setbits++;
            n = n & (n-1);
        }
        return setbits==1;
    }
};