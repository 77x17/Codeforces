#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int t, n[10005], k, tg;
    cin >> t;
    FOR(i, 1, t) cin >> n[i];
    FOR(i, 1, t) 
    {   
        k = 0;
        tg = n[i];
        for (int j = 10; j <= n[i] * 10; )
        {
            if (n[i] % j != 0) 
            {
                k++;
                n[i] -= n[i] % j;
            } 
            j = j * 10;
	    }	
        cout << k <<'\n';

		n[i] = tg;
        for (int j = 10; j <= n[i] * 10; )
        {
			if (n[i] % j != 0) 
            {
                cout << n[i] % j <<' ';
                n[i] -= n[i] % j;
            } 
            j = j * 10;
    	}
        cout << '\n';
    }
    return 0;
}
