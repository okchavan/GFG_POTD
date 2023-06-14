class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
         priority_queue<int> pq;
        long long ans=0;
        
        for(int i=0; i<N; i++) pq.push(A[i]);
        
        while(K-- && !pq.empty()){
            int el = pq.top();
            pq.pop();
            ans+=el;
            
            pq.push(el/2);
        }
        
        return ans;
    }
};