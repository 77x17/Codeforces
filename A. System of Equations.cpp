#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n, m, ans = 0; cin >> n >> m;
	
	FOR(i, 0, sqrt(n))
		FOR(j, 0, sqrt(m))
			if (i * i + j == n && i + j * j == m) ans++;
	
	cout << ans;
	return 0;
}
