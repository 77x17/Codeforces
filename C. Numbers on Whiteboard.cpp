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
		int a[200005];
		FOR(i, 1, n) a[i] = i;
		
		FORB(i, n, 2)
		{
			int tg = (a[i] + a[i - 1]);
			if (tg % 2 == 0){ 
			 a[i - 1] = tg / 2;}
			else { 
			a[i - 1] = tg / 2 + 1;}
		}
		cout << a[1] << '\n';
	
	FOR(i, 1, n) a[i] = i;
	FORB(i, n, 2)
		{
			int tg = (a[i] + a[i - 1]);
			if (tg % 2 == 0){ cout << a[i - 1] << ' ' << a[i] << '\n';
			 a[i - 1] = tg / 2;}
			else { cout << a[i - 1] << " " << a[i] << '\n';
			a[i - 1] = tg / 2 + 1;}
		}
	
	}
	
	return 0;
}
