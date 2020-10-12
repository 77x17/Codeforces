#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int x, y, z; cin >> x >> y >> z; // only green	| except black	| all
	int a, b, c; cin >> a >> b >> c; // green 		| purple 		| black

	if (x > a) cout << "NO";
	else
	{
		b += a - x;
		if (y > b) cout << "NO";
		else
		{
			c += b - y;
			if (z > c) cout << "NO";
			else 	cout << "YES";
		}
	}
		
	return 0;
}
