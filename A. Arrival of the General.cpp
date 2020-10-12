#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, maxhigh, minhigh, maxn, minn, a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i != 1)
        {
            if (maxhigh < a)
            {
                maxhigh = max(maxhigh, a);
                maxn = i;
            }
            if (minhigh >= a)
            {
                minhigh = min(minhigh, a);
                minn = i;
            }
        }
        else
        {
            maxhigh = a;
            maxn = i;
            minhigh = a;
            minn = i;
        }
    }
    if (maxn > minn) cout << (maxn - 1) + (n - minn) - 1; 
    else    cout << (maxn - 1) + (n - minn);
    return 0;
}
