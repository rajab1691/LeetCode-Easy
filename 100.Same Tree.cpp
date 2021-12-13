/*
  Recursive
  1.check the curr's value if it is equal check for right and left subtrees
  2.not equal return false
  
  T.C-O(n),n=nodes of tree
  S.C-O(h),h-height of tree
*/

bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL and q==NULL)return true;
        if(p==NULL or q==NULL)return false;
        
        TreeNode* curr1=p;
        TreeNode* curr2=q;
        
        if(curr1->val==curr2->val){
            return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
        }
        return false;
    }

/*
  Iterative
  1.Use queue and push both roots
  2.Process all nodes in while loops
  T.C-O(n)
  S.C-O(n)
*/

bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*>Q;
        Q.push(p);
        Q.push(q);
        
        while(!Q.empty()){
            
            TreeNode* node1=Q.front();
            Q.pop();
            
            TreeNode* node2=Q.front();
            Q.pop();
                
            if(node1==NULL and node2==NULL)
                continue;
            
            if((node1==NULL or node2==NULL) or (node1->val!=node2->val))
                return false;
            
                Q.push(node1->left);
                Q.push(node2->left);
                Q.push(node1->right);
                Q.push(node2->right);
        }
        return true;
    }
