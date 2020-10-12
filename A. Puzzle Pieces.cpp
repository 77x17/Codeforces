#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;

        if (n == 1 || m == 1) cout << "YES\n";
        else if (n == 2 && n == m) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}