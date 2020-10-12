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
        int a, b, c; cin >> a >> b;
        
        if (a == b) cout << 0 << '\n';
        else    if (a > b)
                {
                    c = a - b;
                    if (c % 2 == 0) cout << 1 << '\n';
                    else cout << 2 << '\n';
                }
                else 
                {
                    c = b - a;
                    if (c % 2 == 1) cout << 1 << '\n';
                    else cout << 2 << '\n';
                }
    }
    
    return 0;
}