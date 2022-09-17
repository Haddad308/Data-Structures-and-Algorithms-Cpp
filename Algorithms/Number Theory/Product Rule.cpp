#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


const int N = 1e6 ;
bool Numbers[N];

/*
Product Rule: How to find all combination of some things.
Example: If I have 3 T-shirts, 4 trouser, 2 Shoes.
How many clothing set I have ?
Simply The answer is 3x4x2
Let's explain how ...
*/


int main() {
    fast
    vector<string> T_shirts, Trousers, Shoes;
    T_shirts = {"Black T-shirt","Red T-shirt","Blue T-shirt"};
    Trousers = {"Black Trousers","Blue Trousers","White Trousers", "Yellow Trousers"};
    Shoes =  {"Black Shoe","White Shoe"};
    int counter = 1 ;
    for(int i=0; i<T_shirts.size(); i++)
        for(int j=0; j<Trousers.size(); j++)
            for(int k=0; k<Shoes.size(); k++) {
                cout << "Combination :" << counter << " " << T_shirts[i] << " and " << Trousers[j] << " and " << Shoes[k]
                     << endl;
                counter ++ ;
            }
}
