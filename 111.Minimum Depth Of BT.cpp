/*
   Recursive
    T.C-O(n),n=nodes of tree
*/
int minDepth(TreeNode* root) {

        if(root==NULL)
            return 0;
        
        int lh=minDepth(root->left);
        int rh=minDepth(root->right);

      //if there's no node in left side then just return right height
        if(lh==0)
            return 1+rh;
      //if there's no node in right side then just return left height
        if(rh==0)
            return 1+lh;
        //both exist then return minimum of both
        return 1+min(lh,rh);
    }


/*
   Iterative
   Using Queue
*/
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
              cnt++;
            int size=q.size();
            while(size--){
                
                TreeNode* node=q.front();
                q.pop();
                
             //if no left and right child then that will be our min depth of tree,so just return cnt
              if(node->left==NULL and node->right==NULL){
                    return cnt;
                }
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
         
        }
        return -1;
    }
};
