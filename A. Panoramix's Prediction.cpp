#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FORB(i, a, b) for(ll i = a; i >= b; i++)
#define FOR(i, a, b) for(ll i = a; i <= b; i++)

int prime(int m)
{
    if (m < 2) return 0;

    FOR(i, 2, sqrt(m)) 
        if (m % i == 0) return 0;
    
    return 1;
}

int nextprime(int n, int m)
{
    FOR(i, n + 1, m - 1)
        if (prime(i)) return 0;

    return 1;
}

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;

        if (!prime(m)) cout << "NO\n";
        else
            if (nextprime(n, m)) cout << "YES\n";
            else cout << "NO\n";
    }

    return 0;
}
