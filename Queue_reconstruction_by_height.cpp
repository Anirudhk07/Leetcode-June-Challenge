#include<vector>
bool sortbysum(vector<int> &v1,vector<int>&v2)
{
    vector<vector<int>>v;
    if(v1[0]==v2[0] )
    {
        return(v1[1]<v2[1]);
    }
    else {
        return(v1[0]>v2[0]);
    }
}


class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
            
        vector<vector<int>>v;
        sort(people.begin(),people.end(),sortbysum);
       
        for(vector<int>& x: people) v.insert(v.begin() + x[1], x);
        return v;
    }
};