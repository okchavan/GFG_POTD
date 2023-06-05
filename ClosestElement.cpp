/*
Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
   public:
    //Function to find the least absolute difference between any node
    //value of the BST and the given integer.
     void fun(Node *root,int &t,int k,int &h){
        if(root==nullptr)return;
        int a=root->data;
        if(a>t && a<=k){
            t=a;
           // System.out.println(t);
        }
        if(a>k && a<h){
            h=a;
        }
        fun(root->left,t,k,h);
        fun(root->right,t,k,h);
    }
    int minDiff(Node *root, int K)
    {
        //Your code here
        int t=0;
        int h=INT_MAX;
        fun(root,t,K,h);
        //cout<<t<<" "<<h;
        if(t==K)return 0;
        return min(K-t,h-K);
    }
}