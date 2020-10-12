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
		char a[105], b[105]; FOR(i, 1, n) cin >> a[i];
		
		int ans = 0;
		bool check = 1;
		while (check == 1)
		{
			check = 0;
			
			FOR(i, 1, n) b[i] = a[i];
			
			FOR(i, 1, n - 1)
				if (a[i] == 'A' && a[i + 1] == 'P')
				{	
					check = 1;
					b[i + 1] = 'A';	
				} 

			FOR(i, 1, n) a[i] = b[i];
			
			if (check == 1) ans++;
		}
		
		cout << ans << '\n';
	}
	
	return 0;
}
