#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, a[1005], best, worst, amazing = 0;
    cin >> n >> a[1];
    best = a[1];
    worst = a[1];
    FOR(i, 2, n) 
    {
        cin >> a[i];
        if (best < a[i] || worst > a[i]) amazing++;
        best = max(best, a[i]);
        worst = min(worst, a[i]);
    }
    cout << amazing;
    return 0;
}
