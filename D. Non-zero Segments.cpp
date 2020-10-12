#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n; cin >> n;
    int a[200005], insert = 0, s;
    
    FOR(i, 1, n) cin >> a[i];
    FOR(i, 1, n - 1)
    {
       
        FOR(j, i + 1, n)
        {
            s = 0;
            FOR(k, i, j) 
            {
                s += a[k];
            }
            if (s == 0) 
               	{
                   	n++;
                   	insert++;
                	for (int l = n; l >= i + 1; )
                    {
                        a[l] = a[l - 1];
                        l--;
                    }    
                    a[i + 1] = 2903;
                    if (a[i] == a[i + 2])
                    {
                    	a[i + 1] = a[i + 2];
                    	a[i + 2] = 2903;
					}
            	}
        }
    }
    cout << insert;
    return 0;
}
