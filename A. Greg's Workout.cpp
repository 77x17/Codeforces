#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n; cin >> n;
	int a[105]; FOR(i, 1, n) cin >> a[i];
	int chest = 0, biceps = 0, back = 0;
	
	FOR(i, 1, n) 
		if (i % 3 == 1) chest += a[i];
		else	if (i % 3 == 2) biceps += a[i];
		else	back += a[i];
		
	if (chest >= biceps && chest >= back) cout << "chest";
	else	if (biceps >= chest && biceps >= back) cout << "biceps";
	else 	cout << "back";
		
	return 0;
}
