#include <string>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



/*
The Merge Sort algorithm is a sorting algorithm that is based on the Divide and Conquer paradigm. In this algorithm,
 the array is initially divided into two equal halves and then they are combined in a sorted manner.
*/

//Time Complexity: O(N log(N))

void merge(int A[], int start, int mid, int end) {
    //stores the starting position of both parts in temporary variables.
    int p = start, q = mid + 1;
    int tmp[end - start + 1], k = 0;

    for (int i = start; i <= end; i++) {
        if (p > mid)      //checks if first part comes to an end or not .
            tmp[k++] = A[q++];
        else if (q > end)   //checks if second part comes to an end or not
            tmp[k++] = A[p++];
        else if (A[p] < A[q])     //checks which part has smaller element.
            tmp[k++] = A[p++];
        else
            tmp[k++] = A[q++];
    }
    for (int p = 0; p < k; p++)
        A[start++] = tmp[p];
}

void merge_sort(int A[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(A, start, mid);
        merge_sort(A, mid + 1, end);

        merge(A, start, mid, end);
    }
}

int main() {
    fast
    int arr[] = {4, 8, 1, 12, 3, 6};
    merge_sort(arr, 0,5);
    for (int i : arr)
        cout << i << " ";

    return 0;

}
