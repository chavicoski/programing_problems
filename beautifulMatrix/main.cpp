#include <bits/stdc++.h>
using namespace std;

int main(){
	int nrow, ncol;
	nrow = ncol = 0;
	int aux, dist;
	for(int i=0; i<25; i++){
		cin >> aux;
		if(aux == 1)
			break;
		ncol = (ncol+1) % 5;
		if(ncol == 0)
			nrow++;		
	}
	dist = abs(ncol-2) + abs(nrow-2);
	cout << dist; 
	return 0;
}
