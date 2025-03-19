#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Convert characters to integers for comparison
        int a = s[0] - '0';
        int b = s[2] - '0';

        if (s[1] == '<') {
            if (a < b) {
                cout << s << endl; // Keep as is
            } else {
                cout << "0<" << b << endl; // Adjusted output
            }
        } else if (s[1] == '>') {
            if (a > b) {
                cout << s << endl; // Keep as is
            } else {
                b++;
                cout << b << ">" << a << endl; // Adjusted output
            }
        } else if (s[1] == '=') {
            if (a == b) {
                cout << s << endl; // Keep as is
            } else if (a > b) {
                cout << a << '>' << b << endl; // Adjusted output
            } else {
                cout << a << '<' << b << endl; // Adjusted output
            }
        }
    }
    return 0;
}
