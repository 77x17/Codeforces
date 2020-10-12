#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int main()
{
    int n, face = 0;
    string a;
    cin >> n;
    FOR(i, 1, n) 
    {
        cin >> a;
        if (a == "Tetrahedron") face += 4; 
        else    if (a == "Cube") face += 6; 
                else    if (a == "Octahedron") face += 8;
                        else    if (a == "Dodecahedron") face += 12; 
                                else    face += 20;
    }
    cout << face;
    return 0;
}
