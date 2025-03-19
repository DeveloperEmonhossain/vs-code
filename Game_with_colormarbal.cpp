#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            --v[i];
        }
        
        vector<int> cnt(n);
        for(auto u:v)cnt[u]++;

        int A=0,B=0;
        for(auto x:cnt)
        {
            if(x==1)
            {
                A++;
            }
            else if(x>1)
            {
                B++;
            }
        }

        cout<<B+(A+1)/2*2<<endl;
    }
}