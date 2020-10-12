#include <bits/stdc++.h>
using namespace std;
#define F(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[55], mvalue;

        F(i, 1, n) cin >> a[i];
        sort(a + 1, a + 1 + n);
        mvalue = a[2] - a[1];
        F(i, 2, n) mvalue = min(mvalue, a[i] - a[i - 1]);
        cout << mvalue << '\n';
    }
    return 0;
}