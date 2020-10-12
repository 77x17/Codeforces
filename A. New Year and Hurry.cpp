#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k, time = 240, i = 1;
    cin >> n >> k;
    time -= k; 
    while (i <= n)
    {
        if ((5 * ((i + 1) * i / 2)) <= time)        
            i++;
        else 
        {
            cout << i - 1;
            return 0;
        }
    }
    cout << i - 1;
}
