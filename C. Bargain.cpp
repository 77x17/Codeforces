#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORB(i, a, b) for(ll i = a; i >= b; i--)

int main(void)
{
    freopen("Input.inp", "r", stdin);
    
    string n, nn; cin >> n;
    nn = n;
    ll k = 0, s = 0, sizen = ;
	
    FOR(k, 0, n.size() - 1)
    {
    	FOR(i, 0, n.size() - 1 - k)
	    {
    	    FOR(j, i, i + k)
        	{
            	n[j] = ' ';
        	}

            ll dem = 1, s1 = 0;
            FORB(j, n.size() - 1, 0)
                if (n[j] != ' ') 
                {
                    s += dem * ((int)n[j] - 48) % 1000000007;
                	dem *= 10 ;
				}        	
			//s += s1;
        	//cout << n << ' ' << s1 << "\n";
	    	n = nn;
		}
    }
    
    cout << s << ' ' << s % 1000000007;
    return 0;
}
