#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int main(void)
{
    int n, x;
    string change, a[N];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i].size() > 10)
        {
            change = a[i][0];
            x = a[i].size() - 2;
            ostringstream convert;   
            convert << x;      
            change += convert.str();
            change += a[i][x + 1];
            cout << change << "\n";
        }
        else cout << a[i] << "\n";
    }
    return 0;
}
