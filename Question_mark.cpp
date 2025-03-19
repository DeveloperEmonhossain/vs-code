#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int A=0,B=0,C=0,D=0;
        for( char u:s)
        {
            if(u=='A')A++;
            if(u=='B')B++;
            if(u=='C')C++;
            if(u=='D')D++;
            
        }

        int result=min(n,A)+min(n,B)+min(n,C)+min(n,D);
        cout<<result<<endl;
    }
}