#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        ll pref_max = 0, s = 0, mx = 0;
        for (int i = 0; i < n;i++)
        {
            pref_max = max(pref_max, (ll)v[i]);
            ll d = pref_max - v[i];
            s += d;
            mx = max(mx, d);
        }
        cout << s + mx << endl;
    }
}