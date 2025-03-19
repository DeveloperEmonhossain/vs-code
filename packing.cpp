#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1] == -1)
            {
                swap(v[i],v[i-1]);
            }
        }
        cout<<(is_sorted(v.begin(),v.end()) ?"Yes\n" :"No\n");
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}