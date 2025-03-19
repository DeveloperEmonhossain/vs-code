#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long ar[n];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }

        for(int i=1;i<=n-2;i++)
        {
            ar[n-1]-=ar[i];
        }
        cout<<ar[n]-ar[n-1]<<endl;
    }
}