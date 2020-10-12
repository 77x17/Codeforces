#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int n = N;
    char a[55];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int k = 1;
    while (k != n)
    {
        if (a[k] == a[k + 1])
        {
            n--;
            for (int i = k; i <= n; i++) a[i] = a[i + 1];
        }
        else k++;
	}
    cout << N - n;
    return 0;
}
