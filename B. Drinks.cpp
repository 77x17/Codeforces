#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[105]; 
    float s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    cout << setprecision(6) << fixed << s / n << endl;
    return 0;
}
