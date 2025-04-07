#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);  // Vector for safer array handling
    for (ll i = 0; i < n; i++) {
        cin >> v[i];  // Read input into the array
    }

    for (ll i = 1; i < n - 1; i++) {
        if (v[i - 1] >= 0) {
            ll x = v[i - 1];
            v[i] = v[i] - 2 * x;
            v[i + 1] = v[i + 1] - x;
            v[i - 1] = 0;
        } else {
            break;
        }
    }

    bool ok = true;
    for (ll i = 0; i < n; i++) {
        if (v[i] > 0) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        Solve();
    }
}
