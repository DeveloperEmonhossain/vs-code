#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string c, d;
        cin >> c >> d;
        vector<string> a(n), b(n);

        for (auto u : c)
        {
            for (int i = 0; i < n; i++)
            {
                a.push_back(u);
            }
        }

        for (auto x : d)
        {
            for (int i = 0; i < n; i++)
            {
                b.push_back(x);
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     cin >> b[i];
        // }

        int cnt = 0, cnt2 = 0;

        for (int i = 0; i < n; i += 2)
        {
            if (a[i] == '0')
            {
                cnt++;
            }
            if (b[i] == '1')
            {
                cnt2++;
            }
        }

        for (int i = 1; i < n; i += 2)
        {
            if (a[i] == '1')
                cnt2++;

            if (b[i] == '0')
                cnt++;
        }

        if (cnt >= ((n + 1) / 2) && cnt2 >= (n / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}