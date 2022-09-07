#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// This Code is made by: Eng.Mohamed El-Haddad

/*
 * Steps of finding divisors of n
 * From 1 to Sqrt(n)
 * Example : n= 36
 * A  B
 * 1x36 = 36
 * 2x18 = 36
 * 3x12 = 36
 * 4 x9 = 36
 * 6 x6 = 36
 */

vector<int> find_divisors(int x)
{
    // To Save divisors
    vector<int> result ;
    int i=1 ;
    // instead of ( i<sqrt(x) ) we can use i*i = x
    for ( ; i*i < x ; ++i )
    {
        if (x%i == 0)
        {
            result.push_back(i); // Saving A
            result.push_back(x/i); // Saving B
        }
    }
    if (x%i == 0 && i*i == x) // if the number is a perfect Squere like 6x6 we don't need to insert 6 twice we just need it once.
        result.push_back(i);

    return result;
}


int main() {
    fast
    int x ;
    cin  >> x  ;
    vector<int> foo = find_divisors(x) ;
    for (auto c : foo)
        cout << c << " ";

}

