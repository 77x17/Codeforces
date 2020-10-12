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
        int n; cin >> n;
        if (n % 4 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}