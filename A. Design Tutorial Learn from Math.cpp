#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, i = 4, j;
    cin >> n;
    while (i < (n / 2 + 1))
    {
    	if ((i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0 || i % 11 == 0) && (i != 2 && i != 3 && i != 5 && i != 7 && i != 11))
        {
            j = n - i;
            if ((j % 2 == 0 || j % 3 == 0 || j % 5 == 0 || j % 7 == 0 || j % 11 == 0) && (j != 2 && j != 3 && j != 5 && j != 7 && j != 11)) 
            {
                cout << i << ' ' << n - i;
                return 0;
            }
            else i++;
        }
        else i++;
    }
}
