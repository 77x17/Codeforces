#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string line;
    cin >> line;
    bool check = 0;
    int n;
    n = line.size() - 1;
    while (check != 1)
    {
        check = 1;
        for (int i = 0; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
                if (line[i] == line[j] && line[i] != 0 && i != j)
                    {
                        for (int k = j; k <= n - 1; k++) line[k] = line[k + 1];
                        line[n] = 0;
                        n--;
                        check = 0;
                    }
    }
    if ((n + 1) % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
