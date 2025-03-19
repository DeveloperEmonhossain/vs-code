#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n],mx=0,cnt=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n;i+=2)
        {
            cnt++;
            mx=max(arr[i],mx);
        }
        mx+=cnt;

       long long mx1=0,cnt1=0;
        for(int i=1;i<n;i+=2)
        {
            cnt1++;
            mx1=max(arr[i],mx1);
        }

        mx1+=cnt1;

        int ans;

        cout<<max(mx,mx1)<<endl;
    }
}        
