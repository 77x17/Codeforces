#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, m, snake = 0;;
    cin >> n >> m;
    while (snake < n)
    {
        snake++;
        if (snake % 2 == 1)
        {
            FOR(i, 1, m) cout << '#'; cout << '\n';
        }
        else    if (snake % 4 == 2) 
                {
                    FOR(i, 1, m - 1) cout << '.'; cout << "#\n";
                }
                else
                {
                    cout << '#'; FOR(i, 1, m - 1) cout << '.'; cout << '\n'; 
                }
    }
    return 0;
}
