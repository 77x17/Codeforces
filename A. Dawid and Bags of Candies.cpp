#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
		
	int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
	
	if (a1 == max(max(max(a1, a2), a3), a4)) if (a1 == a2 + a3 + a4) cout << "YES"; else
		if (a2 == min(min(min(a1, a2), a3), a4)) if (a1 + a2 == a3 + a4) cout << "YES"; else cout << "NO";
		else 	if (a3 == min(min(min(a1, a2), a3), a4)) if (a1 + a3 == a2 + a4) cout << "YES"; else cout << "NO";
		else 	if (a1 + a4 == a2 + a3) cout << "YES"; else cout << "NO";
	else	if (a2 == max(max(max(a1, a2), a3), a4)) if (a2 == a1 + a3 + a4) cout << "YES"; else 
				if (a1 == min(min(min(a1, a2), a3), a4)) if (a1 + a2 == a3 + a4) cout << "YES"; else cout << "NO";
				else 	if (a3 == min(min(min(a1, a2), a3), a4)) if (a2 + a3 == a1 + a4) cout << "YES"; else cout << "NO";
				else 	if (a2 + a4 == a1 + a3) cout << "YES"; else cout << "NO";
	else 	if (a3 == max(max(max(a1, a2), a3), a4)) if (a3 == a1 + a2 + a4) cout << "YES"; else
				if (a1 == min(min(min(a1, a2), a3), a4)) if (a1 + a3 == a2 + a4) cout << "YES"; else cout << "NO";
				else 	if (a2 == min(min(min(a1, a2), a3), a4)) if (a2 + a3 == a1 + a4) cout << "YES"; else cout << "NO";
				else 	if (a3 + a4 == a2 + a1) cout << "YES"; else cout << "NO";
	else 	if (a4 == a1 + a2 + a3) cout << "YES"; else
			if (a1 == min(min(min(a1, a2), a3), a4)) if (a1 + a4 == a3 + a2) cout << "YES"; else cout << "NO";
			else 	if (a3 == min(min(min(a1, a2), a3), a4)) if (a4 + a3 == a2 + a1) cout << "YES"; else cout << "NO";
			else 	if (a2 + a4 == a1 + a3) cout << "YES"; else cout << "NO";
			
	return 0;
}
