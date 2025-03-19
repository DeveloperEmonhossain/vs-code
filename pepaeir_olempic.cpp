#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int v[n];
        int  v2[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>v2[j];
        }

        int sum=v[n-1];

        for(int i=0;i<n-1;i++)
        {
            sum+=max(0,v[i]-v2[i+1]);

        }
        cout<<sum<<endl;
    }
}