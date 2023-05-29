class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> d, string Pattern) {
        vector<string> res;
         string e="-1";
        for(int i=0; i<d.size();i++){
            string s="";
            for(int j=0; j<d[i].length();j++)
            if(d[i][j]>='A' && d[i][j]<='Z'){
                s=s+d[i][j];
                if(s==Pattern) { res.push_back(d[i]);
                    continue;
                }
            }
            
        }
        if(res.empty()==true) {res.push_back(e);}
        return res;
    }

    
};