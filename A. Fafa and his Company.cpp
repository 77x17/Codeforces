#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);
    int n; cin >> n;
    int leader = 0;

    FOR(i, 1, n / 2)
        if ((n - i) % i == 0) leader++;
	
    cout << leader;
    return 0;
}
