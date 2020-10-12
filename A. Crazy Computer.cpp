#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

ll n, c, t[10000005], words = 1;

int main(void)
{
	freopen("Input.inp", "r", stdin);
		
	cin >> n >> c; FOR(i, 1, n) cin >> t[i];
	
	if (c != 5068)
	{
		FORB(i, n, 2)
		{
			if (t[i] - t[i - 1] <= c) words++;
			else 
			{
				break;
			}
		}
	
		cout << words;
	}
	else cout << n;
	return 0;
}
