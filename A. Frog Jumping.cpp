#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define intt long long

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        intt a, b, k; cin >> a >> b >> k;

        if (k % 2 == 0) cout << (k / 2) * a - (k / 2) * b << '\n';
        else cout << ((k / 2) + 1) * a - (k / 2) * b << '\n';
    }

    return 0;
}