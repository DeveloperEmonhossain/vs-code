#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

    
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] + b[i];
        }

        sort(c.begin(), c.end());
        c.erase(unique(c.begin(), c.end()), c.end());

        a.erase(unique(a.begin(),a.end()),a.end());
        sort(b.begin(),b.end());
        b.erase(unique(b.begin(),b.end()),b.end());

        if (c.size() >=3 && a.size()<b.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}