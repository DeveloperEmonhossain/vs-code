#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ans=max(n,m)+1;
        cout<<ans<<endl;
    }
    return 0;
}