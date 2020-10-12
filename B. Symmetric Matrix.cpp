#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        int a[100005];
        int cube = 0;
		n = n * 4;
		
        FOR(i, 1, n) cin >> a[i];
        FOR(i, 1, n - 1) if (i % 4 == 2) if (a[i] == a[i + 1]) cube++;
        
        if (m % 2 == 0 && cube != 0) cout << "YES\n"; 
		else cout << "NO\n";
    }
    return 0;
}
