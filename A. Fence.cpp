#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        
        cout << max(max(a, b), c) + min(min(a, b), c) << '\n';
    }

    return 0;
}