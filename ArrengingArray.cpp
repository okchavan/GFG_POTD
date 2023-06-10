class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            vector<int>ans;
            for(int i=0;i<n;i++){
                if(arr[i]<0){
                    ans.push_back(arr[i]);
                }
            }
            
            //int m=ans.size();
            
             for(int i=0;i<n;i++){
                if(arr[i]>=0){
                    ans.push_back(arr[i]);
                }
            }
            for(int i=0;i<ans.size();i++){
                arr[i]=ans[i];
        }
        }
};