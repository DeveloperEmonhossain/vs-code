#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    cin>>s;
   // if(s[0]>='a' && s[0]<='z')
   if(!s.empty())
    {
        s[0]=s[0]-32;
       cout<<s<<endl;
    } 
}