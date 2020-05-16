#include <iostream>
using namespace std;

// insertion sort function for an unsorted array, using templates

// numerous pairwise swaps performed to sort in ascending order

// Time complexity: O(n^2); more efficient than selection sort
// In-place

template <typename T>
void insertion_sort(T arr[], int size) {
  // ignore arr[0], start comparison from arr[1] onwards
  for (int key = 1; key < size;) {
    // check if element at key is less than (key - 1)
    if (arr[key] < arr[key - 1]) {
      // perform pairwise swap since condition is fulfilled
      T &a = arr[key];
      T &b = arr[key - 1];
      T buff = a;
      a = b;
      b = buff;
      // check if there is a need to do multiple pairwise swaps
      if (key > 0) {
        --key;
      }
    }
    // pairwise swaps complete, skip sorted elements
    else {
      ++key;
    }
  }
}

int main() {
  char carr[] = {'b', 'n', 'a', 'd', 'h', 'p'};
  int iarr[] = {5, 11, 2, 5, 1};
  int n = sizeof(carr) / sizeof(carr[0]);
  insertion_sort(carr, n);
  for (auto i : carr) {
    cout << i << endl;
  }
}
