#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, implement = 0;
    int a[1005][8];
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 3; j++) cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        int check = 0;
        for (int j = 1; j <= 3; j++) 
            if (a[i][j] == 1) check++;
        if (check > 1) implement++;
    }
    cout << implement;
    return 0;
}
