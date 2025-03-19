#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n==1)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]!='z')
                cout<<char(s[i]+1)<<s<<endl;
                else
                cout<<"a"<<s<<endl;
            }
            
        }
        else
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                cout<<s[i];
                
                if(cnt==0 && s[i]==s[i+1] && s[i]!='z')
                {
                    cout<<char(s[i]+1);
                    cnt++;
                }
                else if(cnt==0 && s[i]==s[i+1] && s[i]=='z')
                {
                    cout<<'a';
                    cnt++;
                }

            }
            cout<<endl;
            

        }
        
    }
}