#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {i
        ll n, k;
        cin >> n >> k;
        if(n%2==1)
        {
            n -= k;
            k--;
            ll ans = (n + k - 1) / k;
            cout << ans + 1 << endl;
        }
        else
        {
            k--;
            cout << (n + k - 1) / k << endl;
        }
    }
}