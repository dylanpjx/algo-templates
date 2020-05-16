#include <iostream>
using namespace std;

// selection sort function

// repeatedly find the min element and add
// it to the beginning of sorted subarray

// Time complexity: O(n^2)
// In-place

void selection_sort(int arr[], int size) {
  int buff;
  int min;
  for (int i = 0; i < (size - 1); ++i) {
    // find minimum element
    for (int j = i + 1; j < size; ++j) {
      if (arr[j] < arr[i]) {
        // shift min to beginning of sorted sub array
        min = arr[j];
        buff = arr[i];
        arr[i] = min;
        arr[j] = buff;
      }
    }
  }
}

int main() {
  int iarr[] = {5, 11, 2, 5, 1, 9};
  int n = sizeof(iarr) / sizeof(iarr[0]);
  selection_sort(iarr, n);
  for (auto i : iarr) {
    cout << i << endl;
  }
}
