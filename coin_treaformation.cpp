#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll x;cin>>x;
        ll sum=0;
        while(x>3)
        {
            sum*=2;
            x=x/4;
        }
        
        cout<<sum<<endl;

    }
}