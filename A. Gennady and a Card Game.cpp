#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; i++)

int Check(string n)
{
	int i = 0;
	
    if (n[0] == '3') i = 10;
    if (n[0] == '4') i = 20;
    if (n[0] == '5') i = 30;
    if (n[0] == '6') i = 40;
    if (n[0] == '7') i = 50;
    if (n[0] == '8') i = 60;
    if (n[0] == '9') i = 70;
    if (n[0] == 'T') i = 80;
    if (n[0] == 'J') i = 90;
    if (n[0] == 'Q') i = 100;
    if (n[0] == 'K') i = 110;
    if (n[0] == 'A') i = 120;
    if (n[0] == '2') i = 130;

    if (n[1] == 'D') i += 4;
    if (n[1] == 'C') i += 3;
    if (n[1] == 'S') i += 2;
    if (n[1] == 'H') i += 1;

    return i;
}

int main(void)
{
    freopen("Input.inp", "r", stdin);
    //freopen("Output.out", "w", stdout);

    string n, a, b, c, d, e;
    int nn = 0, aa = 0, bb = 0, cc = 0, dd = 0, ee = 0;

    cin >> n >> a >> b >> c >> d >> e;
    
    /*  nn = Check(n);
        aa = Check(a);
        bb = Check(b);
        cc = Check(c);
        dd = Check(d);
        ee = Check(e);  */
    
    if (n[0] == a[0] || n[0] == b[0] || n[0] == c[0] || n[0] == d[0] || n[0] == e[0] || n[1] == a[1] || n[1] == b[1] || n[1] == c[1] || n[1] == d[1] || n[1] == e[1]) cout << "YES";
    else cout << "NO";
    return 0;
}
