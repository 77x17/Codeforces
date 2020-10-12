#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = a; i <= b; i++) 

int main()
{
    int n, a[10005], b[10005];
    cin >> n;
    FOR(i, 1, n) cin >> a[i] >> b[i];
    FOR(i, 1, n) 
        if ((a[i] / b[i] + 1) * b[i] - a[i] != b[i]) cout << (a[i] / b[i] + 1) * b[i] - a[i] << '\n';
        else cout << "0\n";
    return 0;
}