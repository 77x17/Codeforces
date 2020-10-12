#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n; k = 2 * n - 1;
        string arr, ans; cin >> arr;

        if (n == k) cout << arr << '\n';
        else
        {    
            FOR(i, 0, n - 1)
            {
                int dem = 0;
                FOR(j, i , (n - 1) + i) //cout << arr[j]; cout << '\n';
                {
                    if (arr[j] == '1') dem++;
                }
                //if (dem == 1) ans +="0";
                /*else*/    if (dem % 2 == 0) ans += "1"; else ans += "0";
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
