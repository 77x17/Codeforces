#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);
    
    int calos = 0, a[10];
	string b;
    FOR(i, 1, 4) cin >> a[i]; cin >> b;

    FOR(i, 0, b.size() - 1)
        if (b[i] == '1') calos += a[1];
        else    if (b[i] == '2') calos += a[2];
                else    if (b[i] == '3') calos += a[3];
                        else calos += a[4];
    
    cout << calos;
    return 0;
}
