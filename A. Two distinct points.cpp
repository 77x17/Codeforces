#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	ll t; cin >> t;
	while (t--)
	{
		ll l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
		if (l1 != l2) cout << l1 << ' ' << l2 << '\n';
		else 	if (r1 != r2) cout << r1 << ' ' << r2 << '\n';
		else 	cout << l1 << ' ' << r2 << '\n';
	}
	
	return 0;
}
