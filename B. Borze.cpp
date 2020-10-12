#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    char arr[205]; cin >> arr;

    FOR(i, 0, strlen(arr) - 1)
        if (i < strlen(arr) - 1 && arr[i] == '-' && arr[i + 1] == '.') {cout << '1'; i++;}
        else    if (i < strlen(arr) - 1 && arr[i] == '-' && arr[i + 1] == '-') {cout << '2'; i++;}
        else    if (arr[i] == '.') cout << '0';

    return 0;
}
