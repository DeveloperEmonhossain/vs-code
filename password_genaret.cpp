#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < a;i++)
        {
            cout <<i;

        }
        char ch=65;
        for (int i = 0; i < b;i++)
        {
            cout <<(ch++);
        }

        char ca = 97;
        for (int i = 0; i < c;i++)
        {
            cout << (ca++);
        }
        cout << endl;
    }
}