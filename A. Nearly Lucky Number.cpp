#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string n;
    cin >> n;
    int lucky = 0;
    for (int i = 0; i < n.size(); i++)
        if (n[i] == '4' || n[i] == '7') lucky++;
    if (lucky == 4 || lucky == 7) cout << "YES";
    else cout << "NO";
    return 0;
}
