#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n;
    int a[105], maxb = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxb = max(maxb, a[i]);
    }
    for (int i = 1; i <= n; i++) s += maxb - a[i];
    cout << s;
    return 0;
}