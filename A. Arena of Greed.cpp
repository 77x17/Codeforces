#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	freopen("Input.inp", "r", stdin);
	
    int t; cin >> t;
    while (t--)
    {
        long long n, Chanek = 0; cin >> n;

        while (n != 0)
        {
            if (n % 2 == 0) 
            {
                Chanek += n / 2;
                n /= 2;
                if (n % 2 == 0) n /= 2;
                else n--;
            }
            else
            {
                Chanek++;
                n--;
                if (n % 2 == 0) n /= 2;
                else n--;
            }
        }
        
        cout << Chanek << '\n';
    }
    return 0;
}
