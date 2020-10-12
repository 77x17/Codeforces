#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string math, s;
    int a[105];
    int n = 1;
    cin >> math;
    for (int i = 0; i < math.size(); i++)
        if (math[i] != '+') 
        {
            s = math[i];
            a[n] = atoi(s.c_str());
            n++;
        }
    sort(a + 1, a + n);
    if (n <= 2) cout << a[1];
    else    for (int i = 1; i <= n - 1; i++) 
            {
                cout << a[i];
                if (i != n - 1) cout << "+";     
            }
    return 0;
}
