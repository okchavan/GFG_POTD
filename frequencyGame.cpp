class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        map<int,int>m;vector<int>v;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int min = INT_MAX;
        for(auto x :m)
        {
            if(x.second < min)
            {
                min= x.second;
            }
            
        }
        for(auto x:m)
        {
            if(x.second==min)
            {
                v.push_back(x.first);
            }
        }
        
      int y = *max_element(v.begin(),v.end());
      return y;
    }
};