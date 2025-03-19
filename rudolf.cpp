#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int sum=0;
        for (int i = 0; i < n;i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        if(sum % x ==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}


