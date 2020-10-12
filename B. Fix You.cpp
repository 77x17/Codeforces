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
        int n, m, changing = 0; cin >> n >> m;
        
        char arr[105][105]; 
        FOR(i, 1, n)
            FOR(j, 1, m) 
            {
                cin >> arr[i][j];
                if (i == n && arr[i][j] == 'D') changing++;
                else if (j == m && arr[i][j] == 'R') changing++;
			}
			
        //FOR(i, 1, n)
        //    if (arr[i][m] == 'R') changing++; 
        
        //FOR(i, 1, m)
        //    if (arr[n][i] == 'D') changing++;

        cout << changing << '\n';
    }

    return 0;
}
