#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }

        if(k==0)
        {
            sort(v.begin(),v.end());
            int s=unique(v.begin(),v.end())-v.begin();
            cout<<s<<endl;
        }
        else
        {
            while(!v.size())
            {
                int f_e=v[0];
                for(int i=1;i<=v.size();i++)
                {
                    if(f_e==v[i])
                    {
                        i++;
                    }
                    else
                    {
                        v[i]=f_e;
                    }
                }
                v.erase(remove(v.begin(),v.end(),f_e),v.end());
                cnt++;
            }
            cout<<cnt<<endl;
        }
        
    }
}