#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, p, q;
    cin >> n >> p;
    int a[105], c[210];
    memset(c, 0, sizeof(c));
    for (int i = 1; i <= p; i++)
    {
        cin >> a[i];
        c[a[i]] = 1;
    }
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        cin >> a[i];
        c[a[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
        if (c[i] == 0) 
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    cout << "I become the guy.";
}
