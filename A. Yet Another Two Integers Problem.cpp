#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int t; cin >> t;
    int a[20005], b[20005], c[20005];
    FOR(i, 1 , t) 
    {
        cin >> a[i] >> b[i];
        if (a[i] >= b[i])
        {
            c[i] = (a[i] - b[i]) / 10;
            if ((a[i] - b[i]) % 10 != 0) c[i]++;
        }
        else
        {
            c[i] = (b[i] - a[i]) / 10;
            if ((b[i] - a[i]) % 10 != 0) c[i]++;
        }
    }
    FOR(i, 1, t) cout << c[i] << '\n';
    return 0;
}