#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s="aeiou";
        int n;cin>>n;
        vector<char> ch;
        ll ok=n/5;
        for(int i=0;i<ok;i++)
        {
            for(int j=0;j<5;j++)
            {
                ch.push_back(s[j]);
            }
        }
        ll left=n%5;
        if(left !=0)
        {
            for(int i=0;i<left;i++)
            {
                ch.push_back(s[i]);
            }
        }

        sort(ch.begin(),ch.end());

        for(char x:ch)
        {
            cout<<x;
        }
        cout<<endl;
    }
}