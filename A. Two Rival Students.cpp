#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
		
	int t; cin >> t;
	while (t--)
	{
		int n, x, a, b, tg; cin >> n >> x >> a >> b;
	
		if (a > b) 
		{
			tg = a;
			a = b;
			b = tg;	
		} 
		
		while (x != 0 && (a != 1 || b != n))
		{
			if (a != 1)
			{
				a--;
				x--;	
			} 
			else	if (b != n)
					{
						b++;
						x--;
					}
		} 		
		
		cout << b - a << '\n';
	}
	
	return 0;
}
