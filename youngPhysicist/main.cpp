#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y, z;
	x = y = z = 0;
	int n, xacc, yacc, zacc;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> xacc >> yacc >> zacc;
		x += xacc; y += yacc ; z += zacc;
	}
	if(!x && !y && !z)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
