#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        
        if ((a % b) == 0) cout << "YES\n"; else cout << "NO\n";
    }
    
    return 0;
}