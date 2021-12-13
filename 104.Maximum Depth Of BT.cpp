/*
    Recursive
    T.C-O(n)
*/
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        
        return 1+max(lh,rh);
    }

/*
  Iterative
  1.Using queue,normal queue processing
  T.C-O(n)
  S.C-O(n)
*/
int maxDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){

            int size=q.size();
            while(size--){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            cnt++;
        }
        return cnt;
    }
