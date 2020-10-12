#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while (t--)
    {
        int b, p, f, h, c, profit = 0; cin >> b >> p >> f >> h >> c;
        // bánh - bò - gà - giá bò - giá gà
        if (b < 2) cout << 0 << '\n';
        else
        {
            if (h > c) 
            {
                while (b >= 2 && p != 0)
                {
                    profit += h;
                    p--;
                    b--;
                    b--; 
                }

                while (b >= 2 && f !=0)
                {
                    profit += c;
                    f--;
                    b--;
                    b--;
                } 
            }
            else    
            {    
                while (b >= 2 && f != 0)
                {
                    profit += c;                            
                    f--;
                    b--;
                    b--;
                }
                
                while (b >= 2 && p != 0)
                {
                    profit += h;
                    p--;
                    b--;
                    b--;
                }
            }

            cout << profit << '\n';
        }
        
    }

    return 0;
}