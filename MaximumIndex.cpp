//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
         int leftmin[n];
        int rightmax[n];
        leftmin[0]=arr[0];
        rightmax[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            leftmin[i] = min(leftmin[i-1], arr[i]);
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i] = max(rightmax[i+1], arr[i]);
        }
        int i =0;
        int j=0;
        int maxdiff = -1;
        while(i<n && j<n){
            if(leftmin[i]<=rightmax[j]){
                maxdiff = max(maxdiff,j-i);
                j++;
            }else{
                i+=1;
            }
        }
        return maxdiff;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends