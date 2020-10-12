#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n, steps = 0, k = 0; cin >> n;
	int a[1005], b[1005];
	
	FOR(i, 1, n) 
	{
		cin >> a[i];
		if (a[i] == 1) 
		{
			steps++;
			k++;
			b[k] = 1;
		}
		else
		{
			b[k] = a[i];
		}
	}
	
	cout << steps << '\n';
	
	FOR(i, 1, steps) cout << b[i] << ' '; 
	
	return 0;
}
