#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORB(i, a, b) for(int i = a; i >= b; i--)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        char arr[105]; cin >> arr;
		
        int first = -1, last = -1; 
        FOR(i, 0, strlen(arr) - 1)
            if (arr[i] == '1')
            {
                first = i;
                break;
            }

        if (first == -1) cout << 0 << '\n';
        else
        {
            FORB(i, strlen(arr) - 1, first)
                if (arr[i] == '1')
                {
                    last = i;
                    break;
                }
        
            if (first == last) cout << 0 << '\n';
            else 
            {   
                int r = 0;

                FOR(i, first, last)
                    if (arr[i] == '0') r++;    
                
                cout << r << "\n";
            }
        }
    }

    return 0;
}
