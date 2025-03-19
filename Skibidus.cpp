#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        
        if(s=="us")
        {
            cout<<"i"<<endl;
        }
        else
        {
            s.erase(s.end()-2),s.end();
            s.erase(s.end()-1),s.end();
            cout<<s<<"i"<<endl;
            
            
        }
    }
}