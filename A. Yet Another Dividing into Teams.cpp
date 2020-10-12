#include<bits/stdc++.h>
using namespace std;
int q,n,a[101],k;

int main(void)
{
	cin>>q;
	while(q--)
	{
        k = 0;
    	cin >> n;
    	for(int i = 0;i < n; i++) cin >> a[i];
    	sort(a ,a + n);
    	for(int i = 0; i < n - 1; i++)
    	if(abs(a[i] - a[i + 1]) == 1) k++;
    	cout << (k >= 1 ? 2 : 1) << endl;
	}
	
	return 0;
}

