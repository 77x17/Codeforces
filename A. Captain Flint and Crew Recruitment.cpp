#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while (t--)
    {
        int n ; cin >> n;

        if (n > 6 + 10 + 14 && n - 6 - 10 - 14 != 14 && n - 6 - 10 - 14 != 10 && n - 6 - 10 - 14 != 6) cout << "YES\n6 10 14 " << n - 6 - 10 - 14 << '\n';
        else if (n - 6 - 10 - 14 == 14) cout << "YES\n6 7 10 21\n";
        else if (n - 6 - 10 - 14 == 10) cout << "YES\n5 6 14 15\n";
        else if (n - 6 - 10 - 14 == 6) cout << "YES\n5 6 10 15\n";
        else cout << "NO\n";
    }

    return 0;
}
