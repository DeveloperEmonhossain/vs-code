// In the name of Allah..
// Free Palestine---
// Emon Hossain, CSE KYAU

#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

bool isprime(ll n)
{
    if (n <= 1)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    if (k == 2 && n == 1)
        yes;
    return;

    if (k > 1)
    {
        No;
        return;
    }

    return true;
}
void solve(n)
{
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll n, k;
        cin >> n >> k;

        if (isprime(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}