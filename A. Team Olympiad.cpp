#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main()
{
    int n; cin >> n;
    int a[5005], IT = 0, Math = 0, PE = 0;
    
    FOR(i, 1, n)
    {
        cin >> a[i];
        if (a[i] == 1) IT++;
        else if (a[i] == 2) Math++;
            else PE++;
    }

    cout << min(min(IT, Math), PE) << '\n';
    
    if (min(min(IT, Math), PE) != 0)
    {
        int k = 1 ,team = min(min(IT, Math), PE);
        while (k <= team)
        {
            int j = 1;
            while (j <= 3)
            {
                FOR(i, 1, n) 
                    if (a[i] == j)
                    {
                        cout << i <<' ';
                        a[i] = 0;
                        break;
                    }
                j++;
            }
            cout << '\n';
            k++;
        }
    }
    return 0;
}
