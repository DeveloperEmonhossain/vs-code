#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
        int n=s.size();
        int n1=s1.size();

        int same=0;
      for(int i=0;i<n;i++)
      {
        if(s[i] != s1[i])break;
        same++;
      }

      int ans=0;
      if(!same)ans=n+n1;
      else ans=n+n1+1-same;

      cout<<ans<<endl;
    }
}