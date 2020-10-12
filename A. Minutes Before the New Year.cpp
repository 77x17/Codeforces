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
        int h, m; cin >> h >> m;
        cout << (23 - h) * 60 + 60 - m << '\n';
    }
    return 0;
}