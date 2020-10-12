#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n; cin >> n;
    int a[100005], polices = 0, crimes = 0;
    FOR(i, 1, n) 
    {
        cin >> a[i];
        if (a[i] != -1) polices += a[i];
        else    if (polices < 1) crimes++;
                else polices -= 1;
    }
    cout << crimes;
    return 0;
}