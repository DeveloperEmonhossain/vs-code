#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;string s;
        int y=1;
        cin>>n>>s;
        vector<string> v;
        for(char u:s)
        {
            v.push_back(string(1,u));
        }

        if(v.size()==1)
        {
            cout<<s;
        }
        else
        {
            if(v.size()==2)
            {
                if(v[0]==v[1])
                {
                    cout<<s;
                }
                else
                {
                    cout<<v[0]<<v[0];
                }
            }

            else
            {
                for(string str : v){
                for(char c:str)
                {
                    string result=s;
                    result[1]=result[0];
                    cout<<result;
                }}
            }

        }
        cout<<endl;
    }
}