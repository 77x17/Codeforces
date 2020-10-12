#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[105], b[105];
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        b[a[i]] = i;
    }
    for (int i = 1; i <= n; i++) cout << b[i] << " ";
    return 0;
}