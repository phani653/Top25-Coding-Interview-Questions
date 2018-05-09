vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);q.push(NULL);
        while(!q.empty()){
            TreeNode *tmp= q.front(); q.pop();
            if(tmp==NULL){
                if(!q.empty()) q.push(NULL); 
            }
            else{
                if(!q.empty() && q.front()==NULL) ans.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
            
        }
        return ans;
    }
