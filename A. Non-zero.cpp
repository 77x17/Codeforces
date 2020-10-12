#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[105], step = 0, s = 0; 
		FOR(i, 1, n) 
		{
			cin >> a[i];
			if (a[i] == 0) 
			{
				step++;
				s += 1;
			}
			else s += a[i];
		}
		
		if (s == 0) cout << ++step << '\n';
		else cout << step << '\n';
	}
	
	return 0;
}
