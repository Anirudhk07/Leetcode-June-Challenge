Fast I/O

static auto __io_speed_up = [](){
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  return nullptr;  
}();


Link https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull

https://www.geeksforgeeks.org/fast-io-for-competitive-programming/


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
 
       if(root==NULL)
            return NULL;
        
        if(val==root->val)
            return root;
        
        
        if(val<(root->val))
            return searchBST(root->left,val);
        
           return  searchBST(root->right,val);
       
    
     
    }
};