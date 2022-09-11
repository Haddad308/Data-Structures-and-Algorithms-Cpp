#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//Fast power: An algorithms using to make Exponent function faster


// The following is tha bad Solution
// Complexity : O(power)
int fast_power_Bad(int base, int power)
{
    if (power == 0)
        return 1 ;
    if (power%2 == 0)
        return fast_power_Bad(base,power/2) * fast_power_Bad(base,power/2) ;
    return base * fast_power_Bad(base,power/2) * fast_power_Bad(base,power/2) ;
}


// The following is tha Good Solution
// Optimization : Instead of calling function twice, call it once because every call return the same value
// Complexity : O(log(power))
int fast_power_good(int base, int power)
{
     if (power == 0)
         return 1 ;
     int branch = fast_power_good(base,power/2); // Value stakeholder
     // Power&1 : Check if the number is odd or not.
     if (power&1)
         return base * branch * branch ;
     return  branch * branch ;
}


int main() {
    fast
    cout << fast_power_good(2,3);
}

