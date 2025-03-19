#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        int res;
        cin>>n>>k;
        if(k==1)
        {
            cout<<n<<endl;
        }
        else{
        for(int i=0;i<=100;i++)
        {
            res=pow(k,i);
            n-=res;
            cnt++;
            if(res<=n)
            {
                
            }
        }
        }
        cout<<cnt<<endl;
        

        
    }
    
}