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
		int n, m, a, s = 0; cin >> n >> m; FOR(i, 1, n) { cin >> a; s += a; }
		
		if (m >= s) cout << s << '\n';
		else	cout << m << '\n';
	}
	
	return 0;
}
