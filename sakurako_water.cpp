#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>ar[i][j];
            }
        }

        int sum=0;
        for(int k=0;k<n;k++)
        {
            int i=0,j=k,mn=0;
            while(i<n && j<n)
            {
                if(ar[i][j] < 0)
                {
                    mn=min(ar[i][j],mn);
                }
                i++,j++;
            }
            sum+=abs(mn);
        }

        for(int k=1;k<n;k++)
        {
            int i=k,j=0,mn=0;
            while(i<n && j<n)
            {
                if(ar[i][j] <0)
                {
                    mn=min(mn,ar[i][j]);
                }
                i++,j++;
            }
            sum+=abs(mn);
        }
        cout<<sum<<endl;


    }
}