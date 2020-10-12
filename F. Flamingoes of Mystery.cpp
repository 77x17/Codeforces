#include <bits/stdc++.h> 
using namespace std;

int main(void)
{
    int n; cin >> n;
    int a[1005];

    for (int i = 1; i <= n / 2 + 2; )
    {
        cout << "? " << i << ' ' << i + 1 << '\n';
        fflush(stdout);
        cin >> a[i];
        i = i + 2;
    }

    cout << "! "; 
    for (int i = 1; i <= n / 2 + 2; )
    {
        cout << i << ' ' << a[i] - i << ' ';
        i = i + 2;
    }
    return 0;
}