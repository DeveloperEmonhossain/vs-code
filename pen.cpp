#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<ll> v1;
        for(ll u:v)
        {
            v1.push_back(u);
        }
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1] == -1)swap(v[i],v[i-1]);
        }
        sort(v1.begin(),v1.end());
        if(v==v1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {cout<<"No"<<endl;}
        
        
    }
}