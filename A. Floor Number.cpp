#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = a; i <= b; i++)

int main(void)
{
    int t; cin >> t;
    while (t--)
    {
        int n, x; cin >> n >> x;
        int i = 0;
        while (n > 2 + x * i) i++;
        cout << i + 1 << '\n';
    }
    return 0;
}
