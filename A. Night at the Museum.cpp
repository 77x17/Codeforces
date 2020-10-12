#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main(void)
{
    freopen("Input.inp", "r", stdin);

    string name; cin >> name;
    int x, y = 1, move = 0;
    
    FOR(i, 0, name.size() - 1) 
    {
        x = (int)name[i] - 96;
		
		move += min(abs(x - y), abs(27 - abs(x - y) - 1));
        
    	y = x;
	}
    
    cout << move;
    return 0;
}
