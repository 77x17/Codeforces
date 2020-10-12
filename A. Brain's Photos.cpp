#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);
    
    int x, y; cin >> x >> y;
    string a[105][105], photo = "#Black&White";

    FOR(i, 1, x)
        FOR(j, 1, y) 
        {
            cin >> a[i][j];
            if (a[i][j] == "C" || a[i][j] == "M" || a[i][j] == "Y") photo = "#Color";
        }

    cout << photo;
    return 0;
} 
