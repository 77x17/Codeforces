#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, n; cin >> a >> b >> n;
    int move = 0;
    
    while (n > 0)
    {
        if (move % 2 == 0) n -= __gcd(a, n);
        else n-= __gcd(b, n);
        move++;
    }
    cout << --move % 2;
    return 0;
}
