#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n, m, y[2025]; cin >> n >> m;
	string s[25], t[25]; FOR(i, 1, n) cin >> s[i]; FOR(i, 1, m) cin >> t[i]; s[0] = s[n]; t[0] = t[m];
	int q; cin >> q; 
	while (q--)
	{
		int y; cin >> y;
		
		cout << s[y % n] << t[y % m] << '\n';
	}

	return 0;
}

	
