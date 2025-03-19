#include<bits/stdc++.h>
using namespace std;

void linar_serch(int arr[],int t,int n)
{
    int i;
    for(i=0;i<t;i++)
    {
        if(arr[i]==n)cout<<i<<endl;
    }
}

int main()
{
    int t,n;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    cin>>n;
}