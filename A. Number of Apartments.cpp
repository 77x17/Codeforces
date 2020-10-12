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
		int n; cin >> n;
		bool check = 0;
		
		FOR(i, 0, n / 3)
			FOR(j, 0, n / 5)
				FOR(k, 0, n / 7)
					if (i * 3 + j * 5 + k * 7 == n) 
					{
						cout << i << ' ' << j << ' ' << k << '\n';
						check = 1;
						i = n;
						j = n;
						k = n;
					}
		
		if (check == 0) cout << -1 << '\n';
	}
	
	return 0;
}
