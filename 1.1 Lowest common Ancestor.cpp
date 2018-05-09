bool find(TreeNode *A, int x){
     if(!A) return false;
     if(A->val==x) return true;
     if((A->left and find(A->left,x)) or (A->right and find(A->right,x))) return true;
     return false;
 }
 TreeNode *pk(TreeNode *A, int B, int C){
     if(!A or A->val==B or A->val==C) return A;
     auto x= pk(A->left, B,C);
     auto y= pk(A->right, B,C);
     if(x and y) return A;
     return x?x:y;
 }
 
int Solution::lca(TreeNode* A, int B, int C) {
    if(!find(A,B) or !find(A,C)) return -1;
    auto ans= pk(A,B,C);
    return ans?ans->val:-1;
}
