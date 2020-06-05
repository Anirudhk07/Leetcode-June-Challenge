bool sortcol( const vector<int>& v1, 
               const vector<int>& v2 ) { 
 if(v1[1]-v1[0]>v2[1]-v2[0])
    return true;

return false;    
} 
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        sort(costs.begin(),costs.end(),sortcol);
       
    
        int res = 0 ;
        for(int i =0 ; i <costs.size()/2;i++)
        {
            res+=costs[i][0];
           
            
        }
        for(int i =(costs.size()/2) ; i <costs.size();i++)
        {
            res+=costs[i][1];
           
        }
        return res;
        
        
    }
};