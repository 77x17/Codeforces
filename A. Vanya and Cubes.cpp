#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
	freopen("Input.inp", "r", stdin);
	//freopen("Output.out", "w", stdout);
    int n; cin >> n;
    int a[10005];
    int s = 0, i = 0;

    while (s + a[i] + i + 1 <= n)
    {
        i++;
        a[i] = i + a[i - 1];
        s += a[i];
    }
    
    cout << i;
    return 0;
}
