class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        int start = 1; 
        int end = N;
        bool flag = true;
        while(start < end && end -start >= K)
        {
            if(flag)
            {
                start = start + K;
                flag = false;
            }
            else
            {
                end = end - K;
                flag = true;
            }
           
        }
        if(flag)
        {
            return end;
        }
        return start;
    }
};