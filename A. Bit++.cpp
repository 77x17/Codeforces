#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x = 0;
    string a[155];
    char plus = '+'; 
    char minus = '-';
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
        if ((a[i][0] == plus && a[i][1] == plus) || (a[i][1] == plus && a[i][2] == plus)) x++;
        else if ((a[i][0] == minus && a[i][1] == minus) || (a[i][1] == minus && a[i][2] == minus)) x--;
    cout << x;
    return 0;
}
