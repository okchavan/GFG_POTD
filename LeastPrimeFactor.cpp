class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> ans(n+1, 0);
        
        for(int i=0;i<=n;++i){
            ans[i]=i;
        }
        
        for(int i=2;i<n+1;i++){
                for(int j=i*i ;j<n+1; j+=i){
                    ans[j]=min(i,ans[j]);
            }
        }
        return ans;
    }
    
};