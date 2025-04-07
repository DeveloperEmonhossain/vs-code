#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Solve()
{
    ll n, i;
    cin >> n;
    ll v[n];
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
   if(n==3)
   {
       for (i = 0; i < n;i++)
       {
        if(v[i]==0)
        {
            cout << "NO" << endl;
            return;
        }
       }
   }

    for (i = 2; i <= n - 1; i++)
    {

        if (v[i - 1] >= 0)
        {
            v[i] = v[i] - 2 * v[i - 1];
            v[i + 1] = v[i + 1] - v[i - 1];
            v[i - 1] = 0;
        }
        else
        {
            break;
        }
    }

    int f = 1;
    for (i = 1; i <= n; i++)
    {
        if (v[i] > 0)
        {
            f = 0;
            break;
        }
    }

    if (f == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

   
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
}