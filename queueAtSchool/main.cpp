//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n, t;
	vector<int> swapPos;
	char q [50];
	cin >> n >> t;
	for (int i = 0; i < n; i++){
		cin >> q[i];
	}
	for (int i = 0; i < t; i++){
		swapPos.clear();
		for (int j = 0; j < n-1; j++){
			if (q[j] == 'B' && q[j+1] == 'G')
				swapPos.push_back(j);
		}
		for (vector<int>::iterator it = swapPos.begin(); it != swapPos.end(); ++it){
			q[(*it)] = 'G';
			q[(*it)+1] = 'B';
		}
	}
	for (int i = 0; i < n; i++){
		cout << q[i];
	}
	return 0;
}
