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
        int x, y, z; cin >> x >> y >> z;

        if (x == y && y == z) cout << "YES\n" << x << ' ' << y << ' ' << z << '\n';
        else    if(x == z && x > y) cout << "YES\n" << y << ' ' << y << ' ' << x << '\n';
                else    if(y == z && y > x) cout << "YES\n" << x << ' ' << x << ' ' << z << '\n';
                        else    if(x == y && x > z) cout << "YES\n" << z << ' ' << z << ' ' << x << '\n';
                        		else cout << "NO\n";
    }
    
    return 0;
}
