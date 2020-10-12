#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	ll n, a; cin >> n; 
	FOR(i, 1, n)
	{
		cin >> a;
		if (a % 2 == 0) cout << --a << ' ';
		else cout << a << ' '; 
	}
	
	return 0;
}
