#include <iostream>
using namespace std;

// quick sort function

// pick an element as pivot and partitions the given array around the pivot
// different methods include:
// 1. Always pick first element as pivot
// 2. Always pick last element as pivot (implemented below)
// 3. Pick a random element as pivot
// 4. Pick median as pivot

// Time complexity: O(nlogn) on avg
// In-place

void swap(int *a, int *b) {
  int buff = *a;
  *a = *b;
  *b = buff;
}

// partition function takes the last element as pivot
// it places the pivot element in the correct position
// it places all smaller elements to the left of pivot
// and all greater elements to right of pivot

int partition(int arr[], int low, int high) {
  // pivot element is the last element
  int pivot = arr[high];
  // i iterates through elements less than the pivot
  int i = (low - 1);
  // j iterates through all elements
  for (int j = low; j < high; ++j) {
    // if current element is smaller than or equal to pivot
    if (arr[j] <= pivot) {
      ++i;
      swap(&arr[i], &arr[j]);
    }
  }
  // place the pivot element at the correct position;
  // where all elements less than the pivot are on the left of the pivot,
  // and all elements more than the pivot are on the right of the pivot
  swap(&arr[i + 1], &arr[high]);
  // return pos of pivot element
  return (i + 1);
}

// recursive function to repeatedly call partition()
void quick_sort(int arr[], int low, int high) {
  if (low < high) {
    // pi is partition index, where arr[pi] is the pivot element
    int pi = partition(arr, low, high);

    quick_sort(arr, low, pi - 1);   // before pi
    quick_sort(arr, pi + 1, high);  // after pi
  }
}

int main() {
  int iarr[] = {10, 80, 30, 90, 40, 50, 70};
  quick_sort(iarr, 0, 6);
  for (auto i : iarr) {
    cout << i << endl;
  }
}
