#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


const int N = 1e6 ;
bool Numbers[N];

vector<int> sieve(int n)
{
    // Create an array[N] with all numbers = 1
    fill(Numbers,Numbers+N,1);

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

// "Prime Factorization" is finding which prime numbers multiply together to make the original number.
map<int,int> Prime_Factorization(int number)
{

    map<int,int> result ;
    vector<int> primes = sieve(number);
    int i=0;
    while (true)
    {

        if ( number % primes[i] == 0 ) {
            number /= primes[i];
            result[primes[i]]++;
        } else {
            i+= 1;
        }

        if (number==1)
            break;
    }

    return result ;
}




int main() {
    fast
    map<int,int> foo  = Prime_Factorization(21) ;
    for (auto m : foo)
    {
        cout << m.first << " :" << m.second << endl ;
    }
}
