#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n ; cin >> n ;
    string a[1005];
    FOR(i, 1, n) cin >> a[i] ;
    FOR(i, 1, n)
        if(((a[i].size() + 2) / 2) % 2 == 0)
        {
            for(int j = 0; j <= a[i].size() - 2; j++) 
			    if (j % 4 != 2 && j % 2 == 0)
                {
				    cout << a[i][j] << a[i][j + 1] ;	
			    }
			cout << '\n' ;
        }
        else
        {
        	for(int j = 0; j <= a[i].size() - 3; j++) 
			    if (j % 4 != 2 && j % 2 == 0)
                {
				    cout << a[i][j] << a[i][j + 1] ;	
			    }	
			cout << a[i][a[i].size() - 1] << '\n';
		}
    return 0;
}
