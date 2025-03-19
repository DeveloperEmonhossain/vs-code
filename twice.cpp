#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, a, b, c, cnt = 0, sum = 0;
        cin >> n >> a >> b >> c;

        while (sum < n) {
            if (sum + a <= n) {
                sum += a;
                cnt++;
            } else if (sum + b <= n) {
                sum += b;
                cnt++;
            } else if (sum + c <= n) {
                sum += c;
                cnt++;
            } else {
                break; // No further additions can be made
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
