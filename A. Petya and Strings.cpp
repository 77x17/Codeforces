#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string A, B;
    cin >> A >> B;

    for (int i = 0; i < A.size(); i++) 
        if (A[i] < 92) A[i] += 32;
    for (int i = 0; i < B.size(); i++)
        if (B[i] < 92) B[i] += 32;
    if (A == B) cout << 0;
        else if (A > B) cout << 1;
            else cout << -1;
    return 0;
}
