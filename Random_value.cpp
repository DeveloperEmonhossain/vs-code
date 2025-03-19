#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;cin>>n;
    srand(time(0));
    
    vector<int> random(n);
    map<int,int> frq;

    for(int i=1;i<=n;i++)
    {
        random[i]=rand()%100;
        frq[random[i]]++;
    }
    
    cout<<"Random : ";

    for(auto u:random)
    {
        cout<<u<<" ";
    }

    cout<<endl<<"Frequance "<<endl;
    for( const auto &pair:frq)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    return 0;
}