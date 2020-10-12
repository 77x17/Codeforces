#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	ll t; cin >> t;
	while (t--)
	{
		int n, ans = 0; cin >> n;
		int a[200005]; FOR(i, 1, n) cin >> a[i];
		
		FOR(i, 1, n - 1)
			if (a[i] != a[i + 1] || (a[i] + a[i + 1] <= a[i + 2])) ans++;
			
		cout << n - ans << '\n';			
	} 
	
	return 0;
}
