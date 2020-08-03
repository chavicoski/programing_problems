#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main () {
	int up, low;
	up = 0;
	low = 0;
	string str;
	cin >> str;
	for(int i = 0; i < str.length(); i++){
		if (isupper(str[i]))
			up++;
		else
			low++;
	}
	if (low >= up)
		for(int i = 0; i < str.length(); i++){
			cout << (char)tolower(str[i]);
		}
	else
		for(int i = 0; i < str.length(); i++){
			cout << (char)toupper(str[i]);
		}
	return 0;
}
