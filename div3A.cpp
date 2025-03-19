#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);

        int a=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i]-v[i+1]=='5' || v[i]-v[i+1]=='7')
            {
                a++;
                continue;
                cout<<i<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
            if(a==n)cout<<"Yes"<<endl;
        


    }
}