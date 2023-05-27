class Solution{
    public:
    Node* reverse(Node* node) {
        Node* prev= NULL;
        Node* curr = node;
        while(curr){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;  
        }
        
       return prev; 
    }
    struct Node* modifyTheList(struct Node *head)
    {
        Node* node = head;
        int cnt = 0;
        while(node){
            cnt++;
            node =node->next;
        }
       Node* slow = head;
       Node* fast = head;
       Node* prev;
       while(fast && fast->next) {
           prev = slow;
           slow = slow->next;
           fast= fast->next->next;
       }
       if(cnt%2){
        Node* helper = reverse(slow->next);
       slow->next = helper;
       }
       else{
       Node* helper = reverse(slow);
       prev->next = helper; 
       }
       
       
       
       slow = head;
       fast = head;
       while(fast && fast->next)
       {
           slow = slow->next;
           fast = fast->next->next;
       }
    
       fast = head;
       if(cnt%2)
       slow = slow->next;
       while(slow){
           int val = fast->data;
           fast->data = slow->data-val;
           slow->data = val;
           slow = slow->next;
           fast = fast->next;
           
       }
       
       
       slow = head;
       fast = head;
       prev = NULL;
       
        while(fast && fast->next) {
            prev = slow;
          slow = slow->next;
          fast= fast->next->next;
      }
       
    if(cnt%2){
        Node* helper2 = reverse(slow->next);
       slow->next = helper2;
       }
       else{
       Node* helper2 = reverse(slow);
       prev->next = helper2; 
       }
       
       return head;
    }
};