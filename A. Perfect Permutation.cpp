#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FORB(i, a, b) for(ll i = a; i >= b; i++)
#define FOR(i, a, b) for(ll i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if (n % 2 == 1) cout << -1 << '\n';
        else
        {
            FOR(i, 1, n)
            {
                cout << i + 1 << ' ' << i << ' ';
                i++;
            }
            cout << '\n';
        }
    }

    return 0;
}
