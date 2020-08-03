#include <bits/stdc++.h>
using namespace std;

bool* SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    return prime;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x,y,cap;
    bool *primes = SieveOfEratosthenes(32000);
    cin >> t;
    while(t>0){
        cin >> x >> y;
        cap = sqrt(y) + 1;
        for(int i = x; x <= y; i++){
            if (primes[i])
                cout << i << "\n";
        }
        cout << "\n";
        t--;
    }
    return 0;
}