#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll i, sz = 0, ans = 0, zero = 0;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                while (s[i] == '0')
                {
                    zero++;
                    i++;
                }
                if (sz >= 1)

                    ans = ans + zero * (sz + 1);
                zero = 0;
            }
            if (s[i] == '1')
            {
                sz++;
            }
        }

        cout << ans << endl;
    }
}