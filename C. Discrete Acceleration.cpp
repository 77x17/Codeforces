#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);
    int t; cin >> t;
    int a[110];

    while (t--)
    {
        int n, l; cin >> n >> l;
        int va = 1, vb = 1;
        long double timea, timeb, time, sa = 0, sb = 0, stime = 0;

        FOR(i, 1, n) cin >> a[i];
        
        int i = 1;

        while (va <= n - vb + 1)
        {
            timea = (long double)(a[va] - sa) / va;
            timeb = (long double)(l - a[n - vb + 1] - sb) / vb;
            time = min(timea, timeb);
            
            if (abs(timea - timeb) < 0.01)
            {
                sa += va * timea;
                sb += vb * timeb;
                va++; vb++;      
            } 
            else
            {
                if (abs(min(timea, timeb) - timea )< 0.000001) 
                {
                    sa += va * timea;
                    sb += vb * timea;
                    va++;  
                }
                else 
                {
        	        sa += va * timeb;
            	    sb += vb * timeb;
                    vb++;  
		        }
            }
            stime += time;
        }

        stime += (long double)((long double)l - sb - sa) / (va + vb);
        cout << std::setprecision(20);
        cout << stime << '\n';        
    }
    return 0;
}
