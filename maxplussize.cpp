#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,big;cin>>n;
        vector< int> v(n);vector<int> v1(n);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<=n;i++)
        {
            
            v1+=v[i];
             big=max(v1);
            i++;
            
        }
        int s=v1.size();
        cout<<big+s<<endl;
       
        
    }
}