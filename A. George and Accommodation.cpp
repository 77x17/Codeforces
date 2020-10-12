#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, a[105], b[105], room = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cin >> b[i];
        if (b[i] - a[i] >= 2) room++;
    }
    cout << room;
    return 0;
}