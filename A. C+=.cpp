#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int a, b, n, operations = 0; cin >> a >> b >> n;

        while (a <= n && b <= n)
        {
            if (a > b) b += a;
            else a += b;
            operations++;
        }

        cout << operations << '\n';
    }

    return 0;
}
