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
        int l=0,h=0;
        for(int i=1;i<=s.size();i++)
        {
            if(s[l]==s1[l])
            {
                l++;
            }
            else{
                cout<<s.size()+s1.size()<<endl;
                break;
            }
        }
        if(l==s.size())cout<<s1.size()+1<<endl;
    }
}