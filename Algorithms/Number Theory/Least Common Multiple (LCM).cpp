#include <string>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// Greatest common divisor
int GCD(int x, int y)
{
    if(y==0)
        return x ;
    return GCD(y , x%y);
}


// Least common Multiple
int LCM(int x, int y)
{
    return (x*y)/GCD(x,y);
}


int main() {
    fast
    cout << LCM(15,36) ;
}

