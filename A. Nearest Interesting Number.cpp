#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FORB(i, a, b) for(ll i = a; i >= b; i++)
#define FOR(i, a, b) for(ll i = a; i <= b; i++)

int Interesting(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }

    if (s % 4 == 0) return 1;
    else return 0;
}

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        while (!Interesting(n)) n++;
        
        cout << n << '\n';
    }

    return 0;
}
