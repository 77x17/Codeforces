#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int move = 0, even = 0, odd = 0;
		int a[45];
		
        FOR(i, 0, n - 1)
        {
            cin >> a[i];
            if (i % 2 != a[i] % 2) move++;
            if (a[i] % 2 == 0) even++;
            else odd++;
        }
        
        if (even < odd || even - odd > 1) cout << - 1 << '\n';
        else cout << move / 2 << '\n';
    }
    return 0;
}
