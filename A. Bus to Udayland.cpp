#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);
    int n; cin >> n;
    string a[1005];

    FOR(i, 1, n) cin >> a[i];
    FOR(i, 1, n)
        if (a[i][1] == 'O' && a[i][0] == 'O') 
        {
            cout << "YES\n";
            a[i][1] = '+'; a[i][0] = '+';
            FOR(i, 1, n) cout << a[i] << '\n';
            return 0;
        }
        else    if (a[i][4] == 'O' && a[i][3] == 'O') 
                {
                    cout << "YES\n";
                    a[i][4] = '+'; a[i][3] = '+';
                    FOR(i, 1, n) cout << a[i] << '\n';
                    return 0;
                }
    cout << "NO\n";
    return 0;
}