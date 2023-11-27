/* Find the second largest and second smallest elements from the array
 * Inputs will only be positive number
INPUT
5
4 5 3 6 7

OUTPUT
6 4

Expected Time Complexity:
O(n), Where ‘n’ is the size of an input array ‘a’.

Constraints:
2 ≤ 'n' ≤ 10^5
0 ≤ 'a'[i] ≤ 10^9

Time limit: 1 sec
*/
#include <stdio.h>


/*
 * COMPLEXITY ANALYSIS:
 *  Time complexity : O(N)    // we trasverse through entire array
 *  Space complexity: 1       // we are not creating any memory
 */
void second_largest_smallest(int arr[], int size, int output[]) {
  int largest = arr[0], smallest = arr[0];
  int large = -1, small = -1;

  for (int i = 0; i < size; i++) {
    /* logic to find the second largest number */
    if (arr[i] > largest) {
      large = largest;
      largest = arr[i];
    }
    else if (arr[i] > large)
      large = arr[i];

    /* logic to find the second smallest number */
    if (arr[i] < smallest) {
      small = smallest;
      smallest = arr[i];
    }
    else if (arr[i] < small)
      small = arr[i];
  }

  /* finally adding the second largest and smallest to the array */
  output[0] = large;
  output[1] = small;
}



int main() {
  int large_small[] = {-1, -1};

  int arr[] = {3, 5, 2, 6, 7, 32, 71, 23, 53, 22, 8, 91, 23, 90};
  int size = sizeof(arr) / sizeof(arr[0]);

  second_largest_smallest(arr, size, large_small);

  printf("Second Largest number: %d\n", large_small[0]);
  printf("Second Smallest number: %d\n", large_small[1]);

  return 0;
}
