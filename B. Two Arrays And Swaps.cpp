#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=a; i<=b; i++)
bool comp(const int a, const int b)
{
   return a > b;
}
int main(void)
{
    int t; cin >> t;
    int n, k, l, m;
    int a[205], b[205], c[205];
    FOR(i, 1, t)
    {
    	c[i] = 0;
        cin >> n >> k;
        FOR(j, 1, n) cin >> a[j];
        FOR(j, 1, n) cin >> b[j];
        l = 0; m = 1;
        while (l < k  && m <= n)
        {
            sort(a + 1, a + 1 + n);
            sort(b + 1, b + 1 + n,comp);
            if (a[m] < b[1]) 
            {
                swap(a[m], b[m]);
                l++;
            }
            else m++;
        }
        FOR(j, 1, n) 
		{
			c[i] += a[j];
		}
    }
    FOR(i, 1, t) cout << c[i] << '\n';
    return 0;
}
