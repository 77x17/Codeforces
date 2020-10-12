#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int Triangle(int a, int b, int c)
{
    if (abs(b - c) < a && a < b + c) return 1;
    else return 0;
}

int main(void)
{   
    freopen("Input.inp", "r", stdin);
     
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[50005]; FOR(i, 1, n) cin >> a[i];

        bool check = 0;

        FOR(i, 1, 1)
            FOR(j, i + 1, i + 1)
                FOR(k, j + 1, n)
                    if (!Triangle(a[i], a[j], a[k]))
                    {
                        cout << i << ' ' << j << ' ' << k << '\n';
                        i = n - 2;
                        j = n - 1;
                        k = n;
                        check = 1;
                    }

        if (check == 0) cout << -1 << '\n';
    }

    return 0;
}
