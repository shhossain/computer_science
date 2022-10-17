LLNode* solve(LLNode* node) {
    LLNode* first = node;
    int cnt=node->val;
    LLNode* prev =node;

   while(node){
   if(cnt == 0){
       cnt = node->val;
       prev->next = node;
       prev=node;
     }
    cnt--;
    node = node->next;
  }
 prev->next= NULL;
 return first;
}
