#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int year, a[9];
    bool check = 0;
    cin >> year;
    int tg, k = 1;
    while (check != 1)
    {
        check = 1;
        year++;
        tg = year;
        while (tg != 0)
        {
            a[k] = tg % 10;
            tg = tg / 10;
            k++;
        }
        k = 1;
        for (int i = 1; i <= 3; i++)
            for (int j = i + 1; j <= 4; j++)
                if (a[i] == a[j]) check = 0;
    }
    cout << year;
    return 0;
}
