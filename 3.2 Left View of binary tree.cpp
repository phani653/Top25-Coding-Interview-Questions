void leftView(Node *root)
{
   if(!root) return;
   queue<Node*> q;
   q.push(root); q.push(NULL);
   int is_prev_null=0;
   printf("%d ",root->data);
   while(!q.empty()){
       Node* tmp=q.front(); q.pop();
       if(tmp){
           if(is_prev_null){
               is_prev_null=0;
               printf("%d ",tmp->data);
           }
           if(tmp->left) q.push(tmp->left);
           if(tmp->right) q.push(tmp->right);
       }else{
           is_prev_null=1;
           if(!q.empty()) q.push(NULL);
       }
   }
}
