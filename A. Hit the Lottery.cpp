#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, bills = 0;
    cin >> n;
    bills = n / 100;
    if (n % 100 != 0)
    {
        n = n % 100;
        bills += n / 20;
        n = n % 20;
        bills += n / 10;
        n = n % 10;
        bills += n / 5;
        n = n % 5;
        bills += n / 1;
    }
    cout << bills;
    return 0;
}