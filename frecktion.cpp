#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a=n/2;
    int b=n-a;
    if(n!=3)
    {
    a--;
    b++;
    }
    cout<<a<<" "<<b<<endl;
}