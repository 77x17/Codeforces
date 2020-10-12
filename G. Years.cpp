#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    int b[100005], d[100005];
    int a[100005];
    int maxd = 0, maxp = -1, maxpi;
    
    memset (a + 1, 0, 100005);

    FOR(i, 1, t)
    {
        cin >> b[i] >> d[i];
        FOR(j, b[i], d[i] - 1) a[j] += 1;  
        maxd = max(maxd, d[i]);
    }

    FOR(i, 1, maxd - 1) 
	{
		if (maxp < a[i]) 
		{
			maxpi = i;
			maxp = a[i];
		}
	}
	
	cout << maxpi << ' ' << maxp;	
    return 0;
}
