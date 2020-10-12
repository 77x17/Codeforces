#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, a[35], b[35], guestuniform = 0;
    cin >> n;
    FOR(i, 1, n) cin >> a[i] >> b[i];
    FOR(i, 1, n) 
        FOR(j, 1, n)
 	       if(a[i] == b[j] && i != j) guestuniform++;
    cout << guestuniform;
    return 0;
}
