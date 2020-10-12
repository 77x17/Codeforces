#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    
    int t; cin >> t;
    while(t--)
    {
        int a1, a2, a3, b1, b2, b3, n, na, nb; cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

        if ((a1 + a2 + a3) % 5 == 0) na = (a1 + a2 + a3) / 5;
        else na = ((a1 + a2 + a3) / 5) + 1;

        if ((b1 + b2 + b3) % 10 == 0) nb = (b1 + b2 + b3) / 10;
        else nb = ((b1 + b2 + b3) / 10) + 1;

        if (na + nb <= n) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
