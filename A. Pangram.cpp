#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    int n, letter = (int)'a';
    char a[105];
    cin >> n;
    FOR(i, 1, n) 
    {    
        cin >> a[i];
        if ((int)a[i] <= 90) a[i] += 32;
    }
    if (n < 26) 
    {
        cout << "NO";
        return 0;
    }
    sort(a + 1, a + n + 1);
    int i = 1;
    while (letter <= (int)'z')
    {
        if ((int)a[i] == letter)
        {
            letter++;
            while ((int)a[i] == letter - 1) i++;
        }
        else 
        {
            cout << "NO";
            return 0;
        }
    } 
    cout << "YES";
    return 0;
}
