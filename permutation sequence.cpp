#include <string> 
class Solution {
public:
    int fac(int n )
    {
        int res = 1;
        if(n==0)
            return 1;
        return  n*fac(n-1);
       
    }
    
    
    string getPermutation(int n, int k) {
     vector<string>v;   
    string s = "";
    
        for(int i = 1;i<=n;i++)
                v.push_back(to_string(i));
        
        
        int index;
        k--;
        for(int i  = 1 ; i<=n;i++)
        {
            index= k /fac(n-i);
            s+=v[index];
        
            v.erase(v.begin()+index);
            k -= index*fac(n-i);
            
        }
        return s;
    }
};