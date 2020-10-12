#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);

    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;

        if (n == 1) cout << 0 << '\n';
        else    if (n == 2) cout << m << '\n';
                else cout << m * 2 << '\n';
    }
    return 0;
}
