#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
		
	int t, a[1005], stolen = 0; cin >> t;
	FOR(i, 1, t) cin >> a[i];
	
	sort(a + 1, a + t + 1);

	FORB(i, t, 2)
		if (a[i] - a[i - 1] != 1) stolen += a[i] - a[i - 1] - 1;
	
	cout << stolen;
	return 0;
}
