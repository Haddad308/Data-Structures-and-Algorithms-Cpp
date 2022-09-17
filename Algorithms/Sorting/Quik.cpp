#include <string>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



/*
Similar to the Merge Sort algorithm, the Quick Sort algorithm is a Divide and Conquer algorithm.
It initially selects an element as a pivot element and partitions the given array around the picked pivot.
There are many versions of quickSort that pick pivot in different ways.
*/

//Time Complexity: O(N^2) 

int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main() {
    fast
    int arr[] = {4, 8, 1, 12, 3, 6};
    quickSort(arr, 0,5);
    for (int i : arr)
        cout << i << " ";

    return 0;

}
