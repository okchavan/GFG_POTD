class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int ans=arr[0], sum=arr[0];
        for(int i=1;i<n;i++){
            sum=max(arr[i],sum+arr[i]);
            ans = max(ans,sum);
        }
        return ans;
    }
};