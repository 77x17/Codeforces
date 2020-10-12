#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, points, b = 0, c = 0; cin >> n;
    int a[1005];
    FOR(i, 1, n) cin >> a[i];

    int i = 1;
    while (i < n)
    {  
        points = max(a[i], a[n]);
        if (points == a[i]) i++;
        else n--;
        b += points;
        
        points = max(a[i], a[n]);
        if (points == a[i]) i++;
        else n--;
        c += points;
    }
    
	if (i == n) b += a[i];
	 
    cout << b << ' ' << c;
    return 0;
}
