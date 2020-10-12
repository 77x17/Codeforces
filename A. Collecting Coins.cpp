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
        int a, b, c, n; cin >> a >> b >> c >> n;
        int m, s;

        if (a == b && b == c)
            if (n % 3 == 0) cout << "YES\n";
            else cout << "NO\n";
        else
        {
            m = max(max(a, b), c);
            s = m - a + m - b + m - c;
            a += m - a;
            b += m - b;
            c += m - c;
            n = n - s;
        	
            if (n % 3 == 0 && n >= 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}
