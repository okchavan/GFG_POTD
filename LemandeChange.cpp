  unordered_map<int,int>m;
      m[5]=0;
      m[10]=0;
      m[20]=0;
      
      for(int i=0;i<bills.size();i++)
      {
          if(bills[i]==5)
          {
              m[5]++;
          }
          else if(bills[i]==10)
          {
              if(m[5]>0)
              {
                  m[5]--;
                  m[10]++;
              }
              else
              {
                  return false;
              }
          }
          else
          {
              if(m[10]>0 and m[5]>0)
              {
                  m[10]--;
                  m[5]--;
                  m[20]++;
              }
              else if(m[5]>=3)
              {
                  m[5]=m[5]-3;
                  m[20]++;
              }
              else
              {
                  return false;
              }
          }
      }
      return true;