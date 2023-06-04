class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string> st;
        string t="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='+' || s[i] == '-' || s[i] == '*' || s[i] == '/') //+ - * /
            {
                st.push(t);
                string tt(1, s[i]);
                st.push(tt);
                t="";
            }
            else
            {
                t+=s[i];
            }
        }
        st.push(t);
        string temp="";
        while(!st.empty())
        {
            temp += st.top();
            st.pop();
        }
        return temp;
        }
};
