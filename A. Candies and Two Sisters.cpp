#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int t, a[10005];
    cin >> t;
    FOR(i, 1, t) cin >> a[i];
    FOR(i, 1, t) cout << a[i] - (a[i] / 2) - 1 << '\n';
    return 0;
}