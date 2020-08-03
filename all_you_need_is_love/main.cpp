#include <stdio.h>
#include <math.h>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

long long gcd(long long n, long long m)
{
    if(n==0)return m;
    return gcd(m%n,n);
}

long long stringToNumber(string s)
{
    long long r=0;
    int c=pow(2,s.length()-1);
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            r+=c;
        }
        c/=2;
    }
    return r;
}
int main() {
    int cases;
    scanf ("%d",&cases);
    string x;
    string y;
    int counter = 1;
    while (cases > 0) {
        cin>>x>>y;
        long long x2 = stringToNumber(x);
        long long y2 = stringToNumber(y);
        if(gcd(x2,y2) != 1) printf("Pair #%d: All you need is love!\n",counter);
        else printf("Pair #%d: Love is not all you need!\n",counter);
        counter++;
        cases --;
    }
    return 0;
}
