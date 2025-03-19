#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        vector<int > v;
        for(int i=l;i<=r;i++)
        {
            v.push_back(i);
        }
        int cnt=0;
        for(int i=0;i<r;i++)
        {
            for(int j=l;j<=r;j++)
            {
                if(v[i]*k==v[j])
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}