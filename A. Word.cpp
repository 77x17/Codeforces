
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string line;
    int n = 0;
    cin >> line;
    for (int i = 0; i < line.size(); i++)
        if ((int)line[i] < 91) n++;
    if (n <= line.size() - n)
    {
    	for (int i = 0; i < line.size(); i++)
    		if ((int)line[i] < 91) line[i] += 32;
	}	
    else
    	for (int i = 0; i < line.size(); i++)
    		if ((int)line[i] > 91) line[i] -= 32;
	cout << line;
    return 0;
}
