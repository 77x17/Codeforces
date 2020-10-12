#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, k, person = 0; cin >> n >> k;
    int a[2005];
	FOR(i, 1, n) 
    {
        cin >> a[i];
        a[i] += k; 
        if (a[i] <= 5) person++;
    }
    cout << person / 3;
    return 0;
}