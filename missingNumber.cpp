class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        unordered_map<int, int> mp;
        
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(int i = 1; i<=n+1; i++){
            if(!mp[i]){
                return i;
            }
        }
        
        return 0;
    } 
};