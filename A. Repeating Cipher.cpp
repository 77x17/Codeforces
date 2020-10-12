#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FORB(i, a, b) for(ll i = a; i >= b; i++)
#define FOR(i, a, b) for(ll i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    ll n, k = 0; cin >> n;
    char arr[105]; cin >> arr;
    
    FOR(i, 0, n - 1)
    {
        cout << arr[i];
        k++;
        i += k;
    }

    return 0;
}
