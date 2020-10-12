#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k, road = 0;
    int a[1005];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        if (a[i] > k) road += 2;
        else road++;
    }
    cout << road;
    return 0;
}
