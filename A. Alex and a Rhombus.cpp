#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n, s = 1, y = -4; cin >> n;
	
	FOR(i, 1, n)
	{
		y = y + 4;
		s = s + y;
	}
	
	cout << s;
	return 0;
}
