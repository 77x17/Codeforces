#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);	
		
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[100], b[10000], c[10000]; FOR(i, 1, n) cin >> a[i];
		
		memset(b, 0, 9999);
		memset(c, 0, 9999);
		
		int ans = 0, w;
		FOR(i, 1, n - 1)
			FOR(j, i + 1, n)
			{
				b[a[i] + a[j]]++;
				ans = max(ans, a[i] + a[j]);	
			}
			
		FOR(i, 1, ans) cout << b[i] << ' '; cout << '\n';
	}
	
	return 0;
}
