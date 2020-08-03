#include <bits/stdc++.h>
using namespace std;

float tcos (float a,float b,float c){
    return acos((b*b+c*c-a*a)/(2*b*c))*180/3.14159265;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    int n;
    int x;
    int y;
    float angle;
    float a;
    float b;
    float c;
    bool isSharp = false;
    bool canSharp = false;
    cin >> T;
    for (int t = 0 ; t < T; ++t){//coger todos los test cases
        cin >> n;
        vector<tuple<int, int>> pos;
        for (int i = 0; i < n ; ++i){//construir el vector pos con todas las posiciones
            cin >> x >> y;
            tuple<int, int> aux (x, y);
            pos.push_back(aux);
        }
        for ( auto it = pos.begin() + 2; it != pos.end(); ++it){
            a = sqrt((get<0>(*it)-get<0>(*(it-2)))^2-(get<1>(*it)-get<1>(*(it-2)))^2);
            b = sqrt((get<0>(*(it-1))-get<0>(*(it-2)))^2-(get<1>(*(it-1))-get<1>(*(it-2)))^2);
            c = sqrt((get<0>(*it)-get<0>(*(it-1)))^2-(get<1>(*it)-get<1>(*(it-2)))^2);
            angle = tcos(a, b, c);
            if (angle < 135){
                isSharp = true;
					
			}

        }
        if (isSharp){
            cout << "no ";
            if (canSharp)
                cout << "yes\n";
            else
                cout << "no\n";
        }
        else
            cout << "yes yes\n";

    }
    return 0;
}
