#include <string>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



/*
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.
The array is virtually split into a sorted and an unsorted part.
Values from the unsorted part are picked and placed at the correct position in the sorted part.
*/

//Time Complexity: O(N^2)


void insertion_sort(int a[], int n) { // n >> Index
    for (int i = 1; i < n; i++) {
        int val = a[i];
        int j = i;
        while (j > 0 && val < a[j - 1]) {
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = val;
    }
}


int main() {
    fast
    int arr[] = {4, 8, 1, 12, 3, 6};
    insertion_sort(arr, 6);
    for (int i : arr)
        cout << i << " ";

    return 0;

}
