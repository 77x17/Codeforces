#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
	int n; cin >> n;
	int a[105]; FOR(i, 1, n) cin >> a[i];
	
	sort(a + 1, a + n + 1);
	
	int problems = 0;
	FOR(i, 1, n - 1)
	{
		problems += a[i + 1] - a[i];
		
		i++;
	}

	cout << problems;
	return 0;
}
