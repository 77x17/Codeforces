#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    char arr[105]; cin >> arr;
    ll first = -1, last = - 1, QAQ = 0;

    FOR(i, 0, strlen(arr) - 1) 
        if (arr[i] == 'Q') 
        {
            first = i;
            break;
        }

    if (first == -1) cout << 0;
    else
    {
        FORB(i, strlen(arr) - 1, first)
            if (arr[i] == 'Q')
            {
                last = i;
                break;
            } 

        FOR(i, first, last - 2) 
            FOR(j, i + 1, last - 1)
                FOR(k, j + 1, last)
                    if (arr[i] == 'Q' && arr[j] == 'A' && arr[k] == 'Q') QAQ++;
             
    cout << QAQ;
    }
    
    return 0;
}