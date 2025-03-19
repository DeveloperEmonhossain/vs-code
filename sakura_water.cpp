#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ar[n][n];
        for(int p=0;p<n;p++)
        {
            for(int q=0;q<n;q++)
            {
                cin>>ar[p][q];
            }
        }

        int sum=0;
        for(int a=0;a<n;a++)
        {
            int i=0,j=a,mn=0;
            while(i<n && j<n)
            {
            if(ar[i][j] <0)
            {
                mn=min(ar[i][j],mn);
            }
            i++,j++;
            
            }sum+=abs(mn);
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