#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    //freopen("Input.inp", "r", stdin);

    //int t; cin >> t;
    //while(t--)
    //{
        int n; cin >> n;
        string arr; cin >> arr;
        
        int numx = 0, numdelete = 0;

        FOR(i, 0, n - 1)
        {
            if (arr[i] == 'x' && i == 0) 
            {
                numx = 1;
            }
            else    if (arr[i] == 'x' && arr[i - 1] == 'x') 
                    {
                        numx++;
                        if (numx >= 3) numdelete++;
                    }
            else    if (arr[i] == 'x' && arr[i - 1] != 'x')
                    {
                        numx = 1;
                    }
            else    numx = 0;
            //cout << numdelete << ' ';
        }

        cout << numdelete << '\n';            
    //}

    return 0;
}