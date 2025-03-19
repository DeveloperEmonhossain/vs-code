#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,x=0,y=1;
        cin>>n>>k;
        int arr[n+4];

        for(int i=1;i<=n;i++)
        {
            arr[i]=x;
        }
        while(x+k<=n)
        {
            x+=k;
            arr[x]=y;
            y++;
        }

        for(int i=1;i<=n;i++)
        {
            if(arr[i] == 0)
            {
                arr[i]=y;
                y++;
            }
        }

        for(int i=1;i<=n;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
}