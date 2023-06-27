class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here 
        set<int>st;
        Node* head = head1;
        while(head!=NULL)
        {
            st.insert(head->data);
            head = head->next;
        }
        Node* head9 = head2;
        while(head9!=NULL)
        {
            st.insert(head9->data);
            head9 = head9->next;
        }
        vector<int>v;
        for(auto x:st)
        {
            v.push_back(x);
            //cout<<x<<" ";
        }
        //cout<<'\n';
        head = new Node(v[0]);
        Node* temp = head;
        int i=1;
        while(i<st.size())
        {
            Node* head3 = new Node(v[i]);
            temp->next = head3;
            temp=temp->next;
            i++;
        }
        return head;
    }
    
};
