#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int grid [3][3];
	for(int row = 0; row < 3; row++)
		for(int col = 0; col < 3; col++)
			cin >> grid[row][col];
	int acc;
	for(int row = 0; row < 3; row++){
		for(int col = 0; col < 3; col++){
			acc = grid[row][col];
			if (row - 1 >= 0)
				acc += grid[row-1][col];
			if (row + 1 < 3)
				acc += grid[row+1][col];
			if (col - 1 >= 0)
				acc += grid[row][col-1];
			if (col + 1 < 3)
				acc += grid[row][col+1];
			if (acc % 2 == 0)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
	return 0;
}