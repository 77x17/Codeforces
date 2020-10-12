#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

void Fibonacci(int n, int3 f[25])
{
	f[0] = 1; f[1] = 1;
	
	FOR(i, 2, n) f[i] = f[i - 1] + f[i - 2];
}

int main(void)
{
	int n; cin >> n;
	int f[25];
	Fibonacci(n, f);
	
	cout << f[n];
	return 0;
}
