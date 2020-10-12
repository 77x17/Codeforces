#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k, people = 0;
    int a[55];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (a[i] >= a[k] && a[i] > 0) people++;
    cout << people;
    return 0;
}