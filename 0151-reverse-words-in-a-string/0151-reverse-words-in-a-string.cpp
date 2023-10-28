class Solution {
public:
    string reverseWords(string s) {
        stack<string> str;
        for(int i=0;i<s.length();i++)
        {
            string x="";
            while(i<s.length() && s[i]!=' ')
            {
                x+=s[i];
                i++;
            }
            if(!x.empty())
            {
                str.push(x);
            }
        }
        string ans="";
        int n=str.size();
        int c=0;
        while(!str.empty())
        {
            ans+=str.top();
            str.pop();
            if(c!=n-1)
            ans+=" ";
            c++;
            
        }
        return ans;
        
        
    }
};