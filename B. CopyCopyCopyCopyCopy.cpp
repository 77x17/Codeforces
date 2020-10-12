#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b ; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);
    int t; cin >> t;
    while (t--)
    {
        int n, longest = 0; cin >> n;
        int a[100005];
        
        FOR(i, 1, n) cin >> a[i];
        sort(a + 1, a + n + 1);
        FOR(i, 1, n - 1)
            if (a[i] < a[i + 1]) longest++;
        cout << longest + 1 << '\n';
    }
    return 0;
}
