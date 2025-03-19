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
        int cnt=0;
        // for(char c:s)
        // {
        //     if(c=='1')cnt++;
        // }

        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                v.push_back(i);
            }
        }

        if(v.size()%2 !=0)
        {
            cout<<"No"<<endl;
        }
        
        else if(v.size()==2 && v[1]-v[0]==1)
            {
                cout<<"No"<<endl;
            }
            
        
        else cout<<"Yes"<<endl;


        
        
    }
}