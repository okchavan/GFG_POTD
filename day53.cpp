class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count = 0;
        long prod = 1;
        int len = 0;
        for(int i = 0; i < n; i++){
            len++;
            prod = prod * a[i];
            while(len != 0 && prod >= k){
                prod = prod/a[i - len + 1];
                len--;
            }
            count += len;
        }
        return count;
    }
};