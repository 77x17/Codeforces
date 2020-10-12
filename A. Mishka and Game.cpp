#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main()
{
    int n, Mishka = 0, Chris = 0; cin >> n;
    int a[105], b[105];
    FOR(i, 1, n) 
    {
        cin >> a[i] >> b[i];
        if (a[i] > b[i]) Mishka++;
        else    if (b[i] > a[i]) Chris++; 
    }
    if (Mishka == Chris) cout << "Friendship is magic!^^";
    else    if (Mishka > Chris) cout << "Mishka";
            else cout << "Chris";
    return 0;
}
