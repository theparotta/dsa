#include <stdio.h>

/*
 * Reverse the Array (In-Place)
 * ============================
 * Complexity Analysis:
 *  Time Complexity  - O(N)  // as we loop through half of the array elements
 *  Space Complecity - 1     // as no new elements are created
*/

/* function signatures */
void reverse_array(int[], int);
void swap(int*, int*);

int main() {
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("\nActual array\n");
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);

  reverse_array(arr, size);

  printf("\n\n Reversed array\n");
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);

  puts("\n");
  return 0;
}


void reverse_array(int arr[], int len) {
  /*   -------------------
   *   |  -------------- |   swap these elements
   *   | |             | |
   *   0 1 2 3 4 5 6 7 8 9
   */
  for (int i = 0; i < len/2; i++)
    swap(arr + i, arr + len - 1 - i);
}


void swap(int* left, int* right) {
  int tmp;

  tmp = *left;
  *left = *right;
  *right = tmp;
}
