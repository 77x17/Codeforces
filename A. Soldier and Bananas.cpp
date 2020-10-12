#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long int k, w, n, money = 0;
    cin >> k >> w >> n;
    for (int i = 1; i <= n; i++) money += i * k;
    if (money < w) cout << 0;
    else cout << money - w;
    return 0;
}