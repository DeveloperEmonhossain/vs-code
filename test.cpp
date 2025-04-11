#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string c, d;
        cin >> c >> d;

        vector<char> a(n), b(n);

        // Directly assign characters from c and d to a and b
        for (int i = 0; i < n; ++i) {
            a[i] = c[i];
            b[i] = d[i];
        }

        int cnt = 0, cnt2 = 0;

        // Check even indices
        for (int i = 0; i < n; i += 2) {
            if (a[i] == '0') {
                cnt++;
            }
            if (b[i] == '1') {
                cnt2++;
            }
        }

        // Check odd indices
        for (int i = 1; i < n; i += 2) {
            if (a[i] == '1') {
                cnt2++;
            }
            if (b[i] == '0') {
                cnt++;
            }
        }

        if (cnt >= ((n + 1) / 2) && cnt2 >= (n / 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
