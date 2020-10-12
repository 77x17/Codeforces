#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    //int t; cin >> t;
    //while (t--)
    //{
        int n; cin >> n;
        int a[300005];
        
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int k = 1; k <= n; k++)
        {
            for (int i = 1; i <= n  + 1 - k; i++)
            {
                for (int j = k; j <= i - 1 + k; j++) cout << a[j] << ' ';
        }
        cout << '\n';
    //}
    return 0;
}
