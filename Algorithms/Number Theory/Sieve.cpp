#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int N = 1e6 ;
bool Numbers[N];

// This Solution is made by: Eng.Mohamed El-Haddad

/*
 * Seive algorithms to find prime number from 1 to n
 * # Theory : any number > 1, consist of some prime numbers multiplied together.
 * So any prime number will remove all thier multiples
 * Solution steps :
 * 1- Create an array[N] with all numbers = 1, Wich mean that we suppose that every number is prime until the opposite is proven
 * 2- Make 0 and 1 not primes
 * 3- start with 2 and remove all thier multiples ans so on.
 */

vector<int> sieve(int n)
{
    // Create an array[N] with all numbers = 1
    fill(Numbers,Numbers+10000,1);

    //Make 0 and 1 not primes
    Numbers[0] = Numbers[1] = 0;

    // i += 1 + (i&1) this line mean that we want to increase by 1 if the number is even and by 2 if is odd.
    for (int i=2 ; i*i<=n ; i += 1 + (i&1) ){
        if(Numbers[i]){
            // removing all prime multiples
            for (int j=i*i ; j<= n ; j+= i )
                Numbers[j]= 0 ;
        }
    }

    // Saving the result
    vector<int> result;
    for (int i=2 ;i<=n ; ++i)
        if (Numbers[i])
            result.push_back(i);

    return result;
}

int main() {
    fast
    vector<int> x = sieve(1000);
    for (auto g : x)
        cout << g << " " ;
    return 0;
}

