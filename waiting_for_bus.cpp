#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int sum=0;
    while(t--)
    {
        char bus;
        int man;
        
        cin>>bus>>man;
        if(bus=='P')
        {
            sum+=man;
            
        }
        else
        {
            
            if(sum+1<=man)
            {
                cout<<"YES"<<endl;
                sum=0;
                
            }
            else
            {
                sum-=man;
                cout<<"NO"<<endl;
            }
        }
        
        
    }
}