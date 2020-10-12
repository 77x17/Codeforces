#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FORB(i, a, b) for(ll i = a; i >= b; i++)
#define FOR(i, a, b) for(ll i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;

        cout << n / 2 + 1 << '\n';
    }
    
    return 0;
}