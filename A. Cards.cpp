#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int t; cin >> t;
        string arr; cin >> arr;

        int z = 0, e = 0, r = 0, o = 0, n = 0; // zero - one

        FOR(i, 0, t - 1)
            if (arr[i] == 'n') cout << "1 ";
        
        FOR(i, 0, t - 1)
            if (arr[i] == 'z') cout << "0 ";
        
        cout << '\n';
    }
    
    return 0;
}
