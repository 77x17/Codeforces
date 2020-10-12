#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int n; cin >> n;
    int a[105]; FOR(i, 1, n) cin >> a[i];

    sort(a + 1,a + n + 1);
    
    int bag = 0, similar = 1;;
    FOR(i, 1, n)
    { 
        if (a[i] == a[i - 1]) similar++;
        else similar = 1;
        bag = max(bag, similar);
    }

    cout << bag;
    return 0;
}
