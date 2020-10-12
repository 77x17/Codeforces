#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int k2, k3, k5, k6; cin >> k2 >> k3 >> k5 >> k6;

    cout << min(min(k2, k5), k6) * 256 + min(k2 - min(min(k2, k5), k6), k3) * 32;

    return 0;
}