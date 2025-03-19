#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;int cnt=0;
        cin>>n>>k;
        int a=k;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        if(k==0)
        {
            sort(v.begin(),v.end());
            int s =unique(v.begin(),v.end())-v.begin();
            cout<<s<<endl;
        }
        else
        {
            while(!v.empty())
            {
                int f_e=v[0];
                if(k>=v.size())
                {
                    for(int i=1;i<=v.size();i++)
                    {
                       if(v[i]==f_e)
                       {
                        i++;
                       }
                       else
                       {
                        v[i]=f_e;
                        k--;
                        if(k==0)
                        {
                            k=a;
                        }
                        cout<<"e";
                       }
                    }
                }
                else
                {
                    for(int i=1;i<v.size();i++)
                    {
                        if(v[i]==f_e)
                        {
                            i++;
                        }
                        else
                        {
                            v[i]=f_e;
                            k--;
                            if(k==0)
                            {
                                k=a;
                            }
                            cout<<"emo ";
                        }
                    }
                }

                v.erase(remove(v.begin(),v.end(),f_e),v.end());
                cnt++;
                
            }
            cout<<cnt<<endl;
        }
    }
}