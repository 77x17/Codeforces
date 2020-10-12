#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n ; cin >> n ;
    int a[10005], x, y ;
    FOR(i, 1, n) cin >> a[i];
    FOR(i, 1, n) 
        if ((a[i] / 2) % 2 == 1) cout << "NO\n" ;
        else
        {
            x = 0 ; y = 0 ;
            cout << "YES\n" ;
            FOR(j, 1, a[i] / 2) 
            {   
                cout << j * 2 << ' ' ;
                x += j * 2 ;
            }
            FOR(j, 1, a[i] / 2 - 1) 
            {
                cout << j * 2 - 1 << ' ' ;
                y += j * 2 - 1 ;
            }
            cout << x - y << '\n' ; 
        }
    return 0;
}
