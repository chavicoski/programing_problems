#include <bits/stdc++.h>
using namespace std

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, r, c;
    cin >> t;
    for ( int i = 0; i < t; ++i ) {
        cin >> r >> c;
        cout << (r * (c - 1) + (r - 1) * c) << "\n";
    }
    return 0;
}