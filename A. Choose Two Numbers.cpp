#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n, m, a, b, maxa = 0, maxb = 0; 
	cin >> n;
	FOR(i, 1, n)
	{
		cin >> a;
		maxa = max(maxa, a);
	}
	
	cin >> m;
	FOR(i, 1, m)
	{
		cin >> b;
		maxb = max(maxb, b);
	}
	
	cout << maxa << ' '	<< maxb;
	return 0;	
}
