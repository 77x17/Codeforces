#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        if (n % 10 != 0) n--;
        else n = n / 10; 
    }
    cout << n;
    return 0;
}
