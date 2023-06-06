class Solution
{
    public:
    int m1 =1e9 , m2 =1e9 ; 
    Node* a1 =NULL , *a2=NULL  ; 
    
    int cal(Node* root  , int key )
    {
        
        if(root==NULL)
        return 1e9 ; 
        
        int l =cal(root->left , key ); 
        int r = cal(root->right, key ) ;
        
        if(l<key)
        {
            if(abs((key - l)) < m1 )
            {
                m1= abs((key - l)) ;
                if(l!=1e9)
                {
                    a1 = root->left ;
                }
            }
        }
        if(r<key)
        {
               if(abs((key - r)) < m1 )
            {
                m1= abs((key - r)) ;
                if(r!=1e9)
                {
                    a1 = root->right ;
                }
            }
        }
        if(l>key)
        {
               if(abs((key - l)) < m2 )
            {
                m2= abs((key - l)) ;
                if(l!=1e9)
                {
                    a2 = root->left ;
                }
            }
            
            
        }
        if(r>key)
        {
            if(abs((key - r)) < m2 )
            {
                m2= abs((key - r)) ;
                if(r!=1e9)
                {
                    a2 = root->right ;
                }
            }
        }
        return root->key ;
    }
    
    
    
    
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        
        cal(root , key ) ;
        
        if(root->key>key)
        {
            if(root->key - key < m2 )
            {
                a2 =root ;
            }
        }
        else if(root->key< key )
        {
            if(-root->key + key < m1 )
            {
                a1 =root ;
            }
        }
        
        
         pre =a1 ;
         suc =a2; 
        
    }
};