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
 		int a[50005]; FOR(i, 1, n) cin >> a[i];
 		
 		bool ans = 0;
 		FOR(i, 2, n)
 			if (a[i] >= a[i - 1]) ans = 1;
	 		
	 	if (ans) cout << "YES\n"; else cout << "NO\n";
	}	
 	
    return 0;
}
