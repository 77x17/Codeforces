#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

int different(int n)
{
	int number = 0, a[105];
	while (n != 0)
	{
		number++;
		a[number] = n % 10;
		n = n / 10;
	}
	
	FOR(i, 1, number) 
		FOR(j, 1, number)
			if (i != j && a[i] == a[j]) return 0;
	
	return 1; 	
}

int main(void)
{
	int l, r; cin >> l >> r;
	FOR(i, l, r) 
		if (different(i))
			{
			 	cout << i;
			 	return 0;
			}

	cout << -1;
	return 0;			
}
