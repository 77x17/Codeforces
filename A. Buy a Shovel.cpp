#include <bits/stdc++.h>
using namespace std ;

int main(void)
{
    int n, k ; cin >> n >> k ;
    int shovel = 1;
    while ((shovel * n) % 10 != 0 && (shovel * n) % 10 != k) shovel++;
    cout << shovel;
    return 0;
}