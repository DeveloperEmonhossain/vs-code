#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        int ans=0,result=0;
        cin>>n>>k;
        int b[1000],c[1000];
        for(int i=0;i<k;i++)
        {
            cin>>b[i]>>c[i];
            if(n>=k)
            {
                 ans+=c[i];
            }
            else
            {
                if(n==1)
                {
                    cout<<max(c[i],result);
                }
                
                
            }
        }
        sort(c,c+n);
        int sum=0;

        if(n>=k && n!=1)
        {
            for(int i=1;i<n;i++)
            {
                sum=max(c[i],0);
            }
        }

        if(n>=k)cout<<ans<<endl;
        else cout<<result<<endl;

        
    }
}