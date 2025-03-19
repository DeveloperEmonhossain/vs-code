#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;cin>>s;
    string copy=s;
    reverse(copy.begin(),copy.end());
    if(s==copy)
    {
        sort(copy.begin(),copy.end());
        if(s==copy)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl<<copy<<endl;
        }
    }

    else
    {
        cout<<"YES"<<endl<<copy<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}