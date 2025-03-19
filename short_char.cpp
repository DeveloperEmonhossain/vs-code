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
        int i, zero = 0, ans = 0, one = 0;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                while (s[i] == '0')
                {
                    zero++;
                    i++;
                }
                while (s[i] == '1')
                {
                    one++;
                    i++;
                }
            }
            ans = (one + 1) + (one + 1) * zero;
            zero = 0;
        }
    }
}