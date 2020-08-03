#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int count = 0;
	char prev, current;
	cin >> n;
	cin >> prev;
	for (int i = 1; i < n; i++){
		cin >> current;
		if (current != prev)
			prev = current;
		else
			count++;
	}
	cout << count;
	return 0;
}
