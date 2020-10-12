#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);

    int t; cin >> t;
    while (t--)
    {
        int N; cin >> N;
        int odd = 0, even = 0;
 
        for (int i = 0; i < N; i++) 
        {
            int a; cin >> a;
 
            if (a % 2 == 0) even++;
            else odd++;
        }
 
    bool answer = (odd > 0 && even > 0) || (odd > 0 && N % 2 != 0);
    
    cout << (answer ? "YES" : "NO") << '\n';
    }
    return 0;
}
