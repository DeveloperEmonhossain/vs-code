#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        sort(b.begin(),b.end());
        b.erase(unique(b.begin(),b.end()),b.end());

        if(a.size()+b.size() <4)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
