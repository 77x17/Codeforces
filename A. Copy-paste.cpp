#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int marr, imarr, move = 0;
		int a[1005];
		
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (i == 1) 
            {
                marr = a[1];
                imarr = 1;
            }
            else
            {
                marr = min(marr, a[i]);
                if (marr == a[i]) imarr = i;
            }
        }
        for (int i = 1; i <= n; i++)
            if (i != imarr) move += (k - a[i]) / a[imarr];
        
        cout << move << '\n';
    }
    return 0;
}
