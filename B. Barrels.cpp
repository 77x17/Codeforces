#include <bits/stdc++.h>				
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int t; cin >> t;
	while (t--)
	{
		ll n, k; cin >> n >> k;
		ll a[200005];
		FOR(i, 1, n) cin >> a[i];
		
		sort(a + 1, a + 1 + n);
		
		ll j = n - 1;
		FOR(i, 1, k)
		{
			a[n] += a[j];
			j--;
			if (j == 0) i = k;
		}
		
		cout << a[n] << '\n';  
	}
	
	return 0;
}
