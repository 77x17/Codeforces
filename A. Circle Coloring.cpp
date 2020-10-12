#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);

    int t; cin >> t;
    int a[10][105], p[105];

    while (t--)
    {
        int n; cin >> n;
        FOR(i, 1, 3)
            FOR(j, 1, n) cin >> a[i][j];

        p[1] = a[1][1]; 

        FOR(k, 2, n)
            FOR(i, 1, 3)
                FOR(j, 1, n) 
                    if (a[i][j] != p[k - 1] && j == k)
                    { 
                        if (k == n)
                        {
                            if (a[i][j] != p[1])
                            {
                                p[k] = a[i][j];
                                i = 3;
                                j = n;
                            }
                        }
                        else
                        {
                            p[k] = a[i][j];
                            i = 3;
                            j = n;
                        }
                    }

        FOR(k, 1, n) cout << p[k] << ' ';
        cout << '\n';
    }
    return 0;
}
