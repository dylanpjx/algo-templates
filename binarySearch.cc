#include <iostream>
using namespace std;

// iterative binary search function for a sorted array
// Time complexity: O(log n)

int binary_search(int arr[], int size, int search) {
  int beg = 0;
  int end = size;
  while (beg <= end) {
    int mid = beg + (end - beg) / 2;
    // Check if search is at mid
    if (search == arr[mid]) {
      return mid;
    }
    // if search is before mid, only look at left half
    else if (search < arr[mid]) {
      end = (mid - 1);
    }
    // if search is after mid, only look at right half
    else {
      beg = (mid + 1);
    }
  }
  // while loop ends, element not present
  return -1;
}

int main() {
  int arr[] = {0, 2, 3, 12, 21, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int search = 21;
  int result = binary_search(arr, n, search);
  if (result == -1) {
    cout << "Element not present" << endl;
  } else {
    cout << "Element at index: " << result << endl;
  }
  return 0;
}
