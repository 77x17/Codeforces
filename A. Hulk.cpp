#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i < n * 3; i++)
        if (i % 3 == 1) cout << "I ";
        else    if (i % 3 == 2 && (i / 3) % 2 == 0) cout << "hate ";
                else    if (i % 3 == 2 && (i / 3) % 2 == 1) cout << "love ";
                        else    cout << "that "; 
    cout << "it";
    return 0;
}
