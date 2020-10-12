#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string a, b;
    char tg;
    cin >> a >> b;
    int n = a.size() - 1;
    if (a.size() == 1) 
	{
		if (a == b) cout << "YES";
		else cout << "NO";
		return 0;
	}	
    for (int i = 0; i <= a.size() / 2 - 1; i++)
    {
        tg = a[i];
        a[i] = a[n];
        a[n] = tg;
        n--;
    }
   
    if (a == b) cout << "YES";
    else cout << "NO";
    return 0;
}