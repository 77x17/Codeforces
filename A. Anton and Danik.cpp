#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k = 0;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < n; i++)
        if (a[i] == 'A') k++;
    if (k == n - k) cout << "Friendship";
    else    if (k > n - k) cout << "Anton";
            else cout << "Danik";
    return 0;
}
