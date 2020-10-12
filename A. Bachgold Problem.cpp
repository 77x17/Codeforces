#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);

    int n; cin >> n;
    
    cout << n / 2 << '\n';
    while (n != 0)
    {
        if (n == 3) 
		{
			cout << 3;
			n = 0;
		}
        else 
        {
            cout << 2 << ' ';
            n--;
            n--;
        }
    }
    return 0;
}
