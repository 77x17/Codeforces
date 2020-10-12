#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string letter;
    int n;
    getline(cin, letter);
    n = letter.size() / 3; 
    for (int i = 1; i < letter.size() - 1; i++)
        for (int j = 1; j < i; j++) 
            if (letter[i] == letter[j] && (int)letter[i] != 32 && (int)letter[i] != 44) 
			{
				n--;      
				letter[j] = 32;	
			}
    cout << n << " ";
    return 0;
}