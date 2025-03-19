#include<bits/stdc++.h>
using namespace std;

void capital(string &s)
{
    if(!s.empty())
    {
        s[0]=toupper(s[0]);
    }
}

int main()
{
    string s;
    cin>>s;
    capital(s);
    cout<<s<<endl;
}