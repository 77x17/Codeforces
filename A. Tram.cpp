#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, a[1005], b[1005];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    int maxs = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {
        s -= a[i];
        s += b[i];
        maxs = max(maxs, s);
    }
    cout << maxs;
    return 0;
}
