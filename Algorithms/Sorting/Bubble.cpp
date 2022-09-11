#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int N = 1e6 ;
bool Numbers[N];

/*
Selection Sort :
sorts an array by repeatedly swapping the adjacent elements if they are in the wrong order.

Complexity : O(N-Squared)
*/


void bubbleSort(vector<int>& arr){
    for(int i=0; i<arr.size(); i++)
        for(int j=0; j<arr.size()-1; j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
}


int main() {
    fast
    vector<int> array = {5,3,2,3,9,1};
    bubbleSort(array);
    for(auto num : array)
        cout << num << " " ;

}
