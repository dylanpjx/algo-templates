#include <iostream>
using namespace std;

// merge sort function

// divide and conquer algo:
// divide an array of size n into 2 sub arrays of size n/2
// call merge sort for first half, second half
// repeatedly call merge sort till subarray n = 1
// merge back all n = 1 subarrays to reform array of size n.

// Time complexity = O(n)
// Not in-place

void merge_sort(int arr[], int start, int end) { int mid = (start + end) / 2; }
