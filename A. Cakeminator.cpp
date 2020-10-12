#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n, m, a[15][15], b[15] = {0}, c[15] = {0}, ans = 0; cin >> n >> m;
	
	char check;
	FOR(i, 1, n)
		FOR(j, 1, m)
		{
			cin >> check; 
			if (check == 'S') 
			{
				a[i][j] = 1;
				b[i] = 1;
				c[j] = 1;
			}
			else a[i][j] = 0;
		}

	FOR(i, 1, n)
		if (b[i] == 0)
			FOR(j, 1, m) a[i][j] = 2;
	
	FOR(j, 1, m)
		if (c[j] == 0)
			FOR(i, 1, n) a[i][j] = 2;
			
	FOR(i, 1, n)
		FOR(j, 1, m) 
			if (a[i][j] == 2) ans++;
	
	cout << ans;
	return 0;
}
