#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int first=((2*t1)+(v1*s));
    int secon=((2*t2)+(v2*s));
    if(first>secon)
    {
        cout<<"Second"<<endl;
    
    }
     if(first<secon)
    {
        cout<<"First"<<endl;
    }
    if(first==secon)
    {
        cout<<"Friendship"<<endl;
    }
}