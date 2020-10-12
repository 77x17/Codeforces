#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a, s = 0; 

        FOR(i, 1, n)
        {
            cin >> a;
            s += a;
        }

        if ((int)(s / n) * n < s) cout << (s / n) + 1 << '\n';
        else cout << s / n << '\n';
    }

    return 0;
}
