#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string line;
    cin >> line;
    if ((int)line[0] >= 97) line[0] -= 32;
    cout << line;
    return 0;
}
