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
		char arr[200005]; FOR(i, 1, n) cin >> arr[i];
		
		
		
		FOR(i, 1, n) cout << arr[i]; cout << '\n';
	}
	
	return 0;
}
