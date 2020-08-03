#include <iostream>
using namespace std;

int main(){
	char c;
	bool canBe2 = false;
	while(cin >> c){
		if(c == '-' && canBe2){
			cout << "2";
			canBe2 = false;
		}else if ( c == '.' && canBe2){
			cout << '1';
			canBe2 = false;
		}else if (c == '-')
			canBe2 = true;
		else
			cout << "0";
	}
	return 0;
}

