#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v1(n),v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
            if(v1[i]<v2[i])
            {
                b+=v2[i];
            }
            else
            {
                a+=v1[i];
            }
        }
        if(a<b)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}