#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;
        cin>>s;
        char prev ='1';

        vector<int > v;
        for(char c : s)
        {
            if(c == '1')
            v.push_back(1);
            if(c=='0' && prev=='1')
            v.push_back(0);
            prev =c;

        }

        int one=0,zero=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                one++;
                //cout<<"1"<<endl;
            }
            else { zero++; 
            //cout<<"0"<<endl;
            }
        }

        if(zero <one)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }

}