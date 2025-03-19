#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int x=(k-1);
        vector<int > v;
        if(k==1)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            int in=1;
            int div=n/k;
            for(int i=div+1;i<=n;i++)
            {
                v.push_back(i);
                x--;
                if(x==0 && v.size() !=n)
                {
                    
                    v.push_back(in);
                    in++;
                    // i++;
                    x=(k-1);
                    
                }
            }
        }
        // if(k%2 !=0 && !v.empty())
        // {
        //     v.pop_back();
        // }

        for(auto u:v)cout<<u<<" ";

        cout<<endl;
    }
}