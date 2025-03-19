#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        if(s.size()==1)
        {
            cout<<s;
        }
        else if(s.size()==2)
        {
            if(s[0]==s[1])
            {
                cout<<s;
            }
            else
            {
                cout<<s[0]<<s[0];
            }
        }
        else
        {
            string result=s;
            if(result[1] !=result[0])
            {
                result[1] =result[0];
                cout<<result;
            }
            else
            {
                result[2]=result[1];
                cout<<result;
            }
            
            
        }
        cout<<endl;

    }
}