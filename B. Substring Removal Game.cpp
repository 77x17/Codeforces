#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define intt long long

bool comp(const int a, const int b){
   return a > b;
}

int main(void)
{
    freopen("Input.inp", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        char arr[105]; cin >> arr; 
        
        int k = 0, a[1005] = {0};
        	
        FOR(i, 0, strlen(arr) - 1)
        {
            if (arr[i] == '0') 
            {
                k++;
            }
            else a[k]++;
        }

        sort(a, a + k + 1, comp);

        long long Alice = 0;
        FOR(i, 0, k) 
        {
            Alice += a[i]; 
            i++;
        }
        cout << Alice << '\n';
    }

    return 0;
}
