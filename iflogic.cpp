#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long result=(n-r)*(m-1)+n*m-(r-1)*m-c;
        cout<<result<<endl;
    }
    
}