#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int cnt=0;
        for(char c:s)if(c=='U'){cnt++;}

        if(cnt & 1)
        {
            cout<<"Yes"<<endl;
        }
        else { cout<<"No"<<endl;}
    }
}