#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int x, y, a, b; cin >> x >> y >> a >> b;

        int time = (y - x) / (a + b);
        if (x + time * a == y - time * b) cout << time << '\n';
        else cout << "-1\n"; 
    }

    return 0;
}
