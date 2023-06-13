class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	sort(arr,arr+n);
    int i=n-1;
    vector<int> ans;
    while(i>=n-k)
    {
        ans.push_back(arr[i]);
        i--;
    }
    return ans;
	}


};
