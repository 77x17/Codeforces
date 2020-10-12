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
		ll n, ans = 0; cin >> n;
		
		bool check = 1;
		while (check)
		{
			check = 0;
			
			if (n % 2 == 0) { n = n / 2; check = 1; ans++; }
			else 	if (n % 3 == 0) { n = 2 * n / 3; check = 1; ans++; }
			else	if (n % 5 == 0) { n = 4 * n / 5; check = 1; ans++; }
			
			if (n == 1) check = 0;
			else	if (!check) break; 
		}
		
		if (n == 1) cout << ans << '\n';
		else	cout << -1 << '\n';
	}
	
	return 0;
}
