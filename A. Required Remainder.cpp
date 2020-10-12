#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "r", stdout);

    int t; cin >> t;
    while(t--)
    {
        int x, y, n; cin >> x >> y >> n; 
        
        if ((((n / x) * x) + y) > n && ((n / x) - 1) * x + y > 0) cout << (((n / x) - 1) * x) + y << '\n';
        else    if ((((n / x) * x) + y) > 0) cout << (((n / x) * x) + y) << '\n';
                else cout << 0 << '\n';
	}
	
    return 0;
}
