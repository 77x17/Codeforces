#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n, dem = 0; cin >> n;
	char a[200005], b[200005]; 
	FOR(i, 1, n) 
	{
		cin >> a[i];
		b[n - i + 1] = a[i];
	}
	
	FOR(i, 1, n)
		if (a[i] != b[i]) 
		{
			FOR(j, i, n) 
				if (a[j] == b[i]) 
				{
					dem += j - i;
					FORB(k, j, i + 1)
					{
						char tg = a[k];
						a[k] = a[k - 1];
						a[k - 1] = tg;
					}
					break;
				}
 		}
 	cout << dem;
	
	return 0;
}
