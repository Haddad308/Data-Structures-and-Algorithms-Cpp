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
sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning.

The algorithm maintains two sub-arrays in a given array:
    1-The subarray which already sorted.
    2-The remaining subarray was unsorted.

Complexity : O(N-Squared)
*/


void Selection_sort(vector<int>& arr)
{
    for(int i=0; i<arr.size(); i++)
        for(int j=i+1; j<arr.size(); j++)
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
}

int main() {
    fast
    vector<int> array = {5,3,2,3,9,1};
    Selection_sort(array);
    for(auto num : array)
        cout << num << " " ;

}
