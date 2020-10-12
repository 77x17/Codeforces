#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    
	int t; cin >> t;
 	while(t--)
 	{
 		int n; cin >> n;
 		int a[500005]; FOR(i, 1, n) cin >> a[i];
 		
 		int ans = 0;
		FOR(i, 1, n - 1) 
		{
			FOR(j, i + 1, n)
			{
				int x = a[i] & a[j], y = a[i] ^ a[j];
				if (x >= y && i < j) ans++;
				else if (i > j) break;
				
				cout << x << ' ' << y << '\n';
	 		}
	 		cout <<  "\n\n";
		}		
	 	cout << "ans "<< ans << "\n";
	}
    return 0;
}
