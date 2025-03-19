#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0,cnt1=0;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            (a == 0)?cnt++ : cnt1++;
        }

        if(cnt==0)cout<<0<<" "<<0<<endl;
        else if(cnt>=cnt1)cout<<cnt%2<<" "<<cnt1<<endl;
        else cout<<cnt1%2<<" "<<cnt<<endl;
    }
}