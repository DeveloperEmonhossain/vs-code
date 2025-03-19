#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++;
 
        }
        for(auto u:mp)
        {
            v.push_back(u.second);
        }
        sort(v.begin(),v.end());
        ll sum=v.size();
        for(auto a:v)
        {
            k-=a;
            if(k>=0)sum--;
        }
        sum=max(sum,1LL);
        cout<<sum<<endl;

        
    }
}