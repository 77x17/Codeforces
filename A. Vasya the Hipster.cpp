#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int red, blue;
    cin >> red >> blue;
    cout << min(red, blue) <<' ';
    cout << (max(red, blue) - min(red, blue))/ 2;
    return 0;
}
