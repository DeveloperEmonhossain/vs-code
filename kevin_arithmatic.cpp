#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even++;
            }
            // else
            // {
            //     odd++;
            // }
        }
        odd=n-even;

        // if(odd==n)
        // {
        //     cout<<n-1<<endl;
        // }
        // else 
        // {
        //     cout<<odd+1<<endl;
        // }

        if(even>0)
        {
            cout<<odd+1<<endl;
        }
        else cout<<odd-1<<endl;

    }
}