#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y, a;
    cin >> x >> y >> a;
    if (a % (x + y) < x)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}