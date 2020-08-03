#include <iostream>
using namespace std;

int main () {
	int year;
	cin >> year;
	while(true){
		year++;
		int m = year / 1000;
		int c = year / 100 % 10;
		int d = year / 10 % 10;
		int u = year % 10;
		if (m != c && m != d && m != u && c != d && c != u && d != u)
			break;
	}
	cout << year;
	return 0;
}