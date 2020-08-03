#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0)
			return false;
	}
	return true;
}

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = n + 1; i < m; i++){
		if (isPrime(i) && i != m){
			cout << "NO";
			return 0;
		}
	}
	if (isPrime(m))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
