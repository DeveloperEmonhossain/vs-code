#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s="emon";
        int n;cin>>n;
        vector<char>ch;
        int ok=n/4;
        int left=n%4;
        for(int j=0;j<ok;j++)
        {
            for(int i=0;i<4;i++)
            {
                ch.push_back(s[i]);

            }
        }

        if(left !=0)
        {
            for(int i=0;i<left;i++)
            {
                ch.push_back(s[i]);
            }
        }
        sort(ch.begin(),ch.end());

        for(char u:ch)
        {cout<<u;}

        cout<<endl;
    }
}