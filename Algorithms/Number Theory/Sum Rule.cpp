#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int N = 1e6 ;
bool Numbers[N];

/*
Sum Rule: How to Count without repeating.
Example: How many Number is divisible by 2 or 3 or 5 From 1 t0 100.
The Trivial Solution is to find the numbers divisible by 2 + by 3 + by 5
But what about the intersects ? - Of-course we have some number which is divisible by 3 and 2
Solution:
 1- Enumerate all sets
 2- Exclude sets with Even length
 3- Include sets with Odd length
*/

//Prerequisites : Bitmask

int main() {
    fast
    int ans = 0 ;
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            for(int k=0; k<2; k++) {
                int mul=1, count_subs=0;
                if (i) mul *= 2 , count_subs ++ ;
                if (j) mul *= 3 , count_subs ++ ;
                if (k) mul *= 5 , count_subs ++ ;

                if(count_subs == 0)
                    continue;

                int sign = count_subs%2 == 0 ? -1 : 1 ;
                ans += sign* (1000 / mul );

            }

    cout << ans ;
}
