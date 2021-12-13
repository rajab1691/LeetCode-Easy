/*
  //for reference article: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/discuss/861811/Easy-Explained-C%2B%2B-Solution
  Recursive
  1.Use mid point as root elem
  2.less than mid is left subtree
  3.more than mid is right subtree
  
  T.C-O(n)
*/
  TreeNode* bstUtil(vector<int>& nums,int l,int h){
        
        if(l>h)return NULL;
        
        int mid=l+(h-l)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        
        root->left=bstUtil(nums,l,mid-1);
        root->right=bstUtil(nums,mid+1,h);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return bstUtil(nums,0,nums.size()-1);
    }

