#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    string a, b, c;
    char x[105], z[105];
    cin >> a >> b >> c;
    a += b;
    FOR(i, 1, a.size()) x[i] = a[i - 1];
    FOR(i, 1, c.size()) z[i] = c[i - 1];
    sort(x + 1, x + a.size() + 1);
    sort(z + 1, z + c.size() + 1);
    
    FOR(i, 1, a.size()) a[i - 1] = x[i]; 
    FOR(i, 1, c.size()) c[i - 1] = z[i]; 
    if (a == c) cout << "YES";
    else cout << "NO";
    return 0;
}
