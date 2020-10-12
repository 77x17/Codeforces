#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);

    int t; cin >> t;

    while(t--)
    {
        int n, k, d = 1; cin >> n >> k;
        int a[105], m = 0;
        
        cin >> a[1];
        FOR(i, 2, n) 
        {
            cin >> a[i];
            if (a[i] != a[i - 1]) d++;
        }

        if (k == d) cout << 1 << '\n';0
        cout << d << '\n';
        cout << m << '\n' << '\n';
    }
    return 0;
}
