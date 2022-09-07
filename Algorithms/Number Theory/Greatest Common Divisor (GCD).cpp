#include <string>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// This code is made by: Eng.Mohamed El-Haddad

// Greatest common divisor
int GCD(int x, int y)
{
    if(y==0)
        return x ;
    return GCD(y , x%y);
}


int main() {
    fast
    vector<int> nums = {3,5,7,9,14};
    int gcd = 0 ;
    for (int num : nums)
        gcd = GCD(gcd ,num);

    cout << gcd ;
}

