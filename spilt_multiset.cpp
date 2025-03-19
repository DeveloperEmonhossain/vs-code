#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll cnt=0;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            k--;
            while(n>=2)
            {
              n=n-k;
              cnt++;
            }
        
        cout<<cnt<<endl;
        }
        

        
    }
}