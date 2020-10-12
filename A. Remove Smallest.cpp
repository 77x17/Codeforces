#include <bits/stdc++.h>
using namespace std ;
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)
int main(void)
{
    int t ; cin >> t ;
    int n, a[1005], b[1005];
    FOR(i, 1, t) 
    {
        cin >> n;
        FOR(j, 1, n) cin >> a[j];
        sort(a + 1, a + n + 1);
        b[i] = 0;
        FORB(j, n, 2) 
            if (a[j] - a[j - 1] > 1) b[i] = 1; 
    }
    FOR(i, 1, t) 
		if (b[i] == 0) cout << "YES\n" ;
		else cout << "NO\n" ;
    return 0;
}
