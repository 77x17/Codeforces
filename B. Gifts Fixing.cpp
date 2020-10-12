#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main()
{
    int t; cin >> t;
    while(t--) 
    {
        int n; cin >> n;
        int a[55], b[55], mcandys, moranges, imcandys, imoranges;
        FOR(i, 1, n) 
        {   
            cin >> a[i];
            if (i == 1) 
            {
                mcandys = a[1];
                imcandys = 1;
            }
            else 
            {
                mcandys = min(mcandys, a[i]);
                if (mcandys == a[i]) imcandys = i;
            }
        }
        FOR(i, 1, n) 
        {   
            cin >> b[i];
            if (i == 1) 
            {
                moranges = b[1];
                imoranges = 1;
            }
            else 
            {   
                moranges = min(moranges, b[i]);
                if (moranges == b[i]) imoranges = i;
            }
        }

        bool check = 0;
        int i = 1; 
		long long move = 0;
        while (check == 0)
        {	
            if (a[i] > a[imcandys]) 
            {   
                if (b[i] > b[imoranges])
                {
                    move += a[i] - a[imcandys];
                    b[i] -= a[i] - a[imcandys];
					a[i] -= a[i] - a[imcandys];
                }
                else
                {   
                    move += a[i] - a[imcandys];
                    a[i] -= a[i] - a[imcandys];
                    
                }
            }
            else 
            {
                if (b[i] > b[imoranges])
                {
                    move += b[i] - b[imoranges];
                    b[i] -= b[i] - b[imoranges];
                }
                else i++;
            }
            if (i > n) check = 1;
        }
    
        cout << move << '\n';
    }
    return 0;
}
