#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n,i=1;
    cin >> n;
    int cnt = 1;
    while(i<n)
    {
        ll tmp = (i + 1) * 2ll;
        cnt++;
        i = tmp;
    }

    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}