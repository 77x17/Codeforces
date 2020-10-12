#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, t;
    string a, b;
    cin >> n >> t;
    cin >> a;
    b = a;
    for (int i = 1; i <= t; i++)
    {
        a = b;
        for (int k = 0; k < n; k++)
            if (a[k] == 'B' && a[k + 1] == 'G') 
            {
                b[k] = 'G';
                b[k + 1] = 'B';
            }
    }
   	cout << b;
    return 0;
}
