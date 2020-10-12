#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int d1, d2, d3; cin >> d1 >> d2 >> d3;
    
    cout << min(min(min(((d1 + d2) * 2), (d1 + d3 + d2)), (d2 + d3 + d3 + d2)), (d1 + d3 + d3 + d1));

    return 0;
}
