#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x[9];
    for(int i = 1; i <= 4; i++) cin >> x[i];
    sort(x + 1, x + 5);
    cout << x[4] - x[3] <<' '<< x[1] - (x[4] - x[3]) <<' '<< x[2]- (x[4] - x[3]);
    return 0;
}
