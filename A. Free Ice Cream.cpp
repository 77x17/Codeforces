#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)


int main(void)
{
    freopen("Input.inp", "r", stdin);
    
    ll n, x, distress = 0; cin >> n >> x;
    
    FOR(i, 1, n) 
    {
        char calculation; cin >> calculation;
        ll a; cin >> a;
        if (calculation == '+') x += a;
        else
        {
            if (a > x) distress++;
            else x -= a; 
        }    
    }   

    cout << x << ' ' << distress;
    return 0;
}