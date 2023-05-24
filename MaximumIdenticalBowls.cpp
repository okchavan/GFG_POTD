class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
           long int sum=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        
        while(sum%N!=0) N--;

        return N;
    }
};