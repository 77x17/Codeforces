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
        int n, k = 0; cin >> n;
        int a[110], b[110], c[110];

        FOR(i, 1, n * 2) 
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a + 1, a + 2 * n + 1);

        FOR(i, 1, n * 2)
            if (i % 2 == 1)
            {
                k++;
                c[k] = a[i];
            }

        k = 1;

        FOR(i, 1, n * 2)
            FOR(j, 1, n)
                if (b[i] == c[j]) 
                {
                    cout << b[i] << ' ';
                    c[j] = 0;
                }
        
        cout << '\n';
    }
    return 0;
}
