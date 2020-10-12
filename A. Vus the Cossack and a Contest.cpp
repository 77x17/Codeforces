#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.INP", "r", stdin);
    //freopen("Output.OUT", "w", stdout);

    int n, m, k; cin >> n >> m >> k;
    if (n <= m && n <= k) cout << "YES";
    else cout << "NO";
    return 0;
}