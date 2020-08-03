#include <bits/stdc++.h>
using namespace std;

int main () {
	char aux;
	int count = 0;
	while(cin >> aux){
		if(aux == '4')
			count++;
		else if(aux == '7')
			count++;
	}
	if (count == 4 || count == 7)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
