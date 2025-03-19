#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,x;
        cin>>a>>b;
        // if(a== 0 || b==0)
        // {
        //     cout<<"0"<<endl;
        //     break;
        // }
        if(a>b)
        {
            // int mod=a%b;
            // int ans=a-mod;
            cout<<a<<endl;
            
        }
        else
        {
            int mod=b-a;
            b-=2*mod;
            if(b<0)b=0;
             cout<<b<<endl;
            
        }
    }
}