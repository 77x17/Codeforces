#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[1005], b[1005];
        bool check = 0;

        FOR(i, 1, n) cin >> a[i];
        FOR(i, 1, m) cin >> b[i];

        FOR(i, 1, n)
            FOR(j, 1, m)
                if (a[i] == b[j]) 
                {
                    check = 1;
                    cout << "YES\n1 " << a[i] << '\n';
                    i = n;
                    j = m;
                }
        
        if (!check) cout << "NO\n";
    }

    return 0;
}
