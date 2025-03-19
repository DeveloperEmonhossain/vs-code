#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        bool ok=true;int a=0,b=0;
        
        while(!v.empty())
        {
            
            auto max_ele=max_element(v.begin(),v.end());
            int mx=*max_ele;

            if(ok)
            {
                a+=mx;
                ok=false;
            }
            else 
            {
                b+=mx;
                ok=true;
            }

            v.erase(max_ele);
        }

        if(a>b)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
}