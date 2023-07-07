class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
             vector<int>ans;
            for(int i=0;i<n;i++){
                ans.push_back(arr1[i]);
            }
             for(int i=0;i<m;i++){
                ans.push_back(arr2[i]);
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<n;i++){
                arr1[i]=ans[i];
            }
            int j=0;
            for(int i=n;i<ans.size();i++){
                arr2[j]=ans[i];j++;
            }
        } 
};
