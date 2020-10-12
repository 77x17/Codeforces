#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.INP", "r", stdin);
    //freopen("Output.OUT", "w", stdout);
    int n, move = 0; cin >> n;
    string a, b;
    cin >> a >> b;
    FOR(i, 0, n - 1) if (abs((int)a[i] - 48 - (int)b[i] + 48) > 5) move += 10 - (abs((int)a[i] - 48 - (int)b[i] + 48));
    else move += (abs((int)a[i] - 48 - (int)b[i] + 48));
    cout << move;
    return 0;
}
