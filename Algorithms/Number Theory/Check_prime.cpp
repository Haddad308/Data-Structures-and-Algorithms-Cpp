#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


bool is_prime(int x)
{
    // 0 and 1 is not prime
    if(x < 2 )
        return 0 ;
    // 2 is prime
    if(x == 2)
        return 1;
    // any even number is prime
    if(x % 2 == 0)
        return  0 ;

    // if we find any divisor we can say that this number is not prime
    for (int i = 3 ; i*i < x ; i += 2 )
    {
        if(x%i==0)
            return 0;
    }
    return 1;


}


int main() {
    fast
    for (int i =0 ; i<100 ; i++)
    {
        if (is_prime(i))
            cout << i  << "is prime" << endl;
    }


}

