#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      
    
      if(s[1] == '<')
      {
       if(s[0]<s[2])
        {
        cout<<s<<endl;
        }
      else if(s[0] == s[2])
      {
        cout<<s[0]<<'='<<s[2]<<endl;
      }

      else
        {
        cout<<s[0]<<">"<<s[2]<<endl;
        }
      }
        ///new line

      if(s[1] == '>')
      {
       if(s[0]>s[2])
        {
        cout<<s<<endl;
        }
        else if(s[0] == s[2])
      {
        cout<<s[0]<<'='<<s[2];
      }
        else
        {
        cout<<s[0]<<"<"<<s[2]<<endl;
        }
      }

      if(s[1] == '=')
      {
       if(s[0]==s[2])
        {
        cout<<s<<endl;
        }
        else if(s[0]<s[2])
        {
            cout<<s[0]<<"<"<<s[2]<<endl;
        }
        else if(s[0]>s[2])
        {
            cout<<s[0]<<">"<<s[2]<<endl;
        }
      }
    }
    return 0;
}