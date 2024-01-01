/* LEFT ROTATE THE ARRAY
 * =====================
 * Given the array of N integers, left rotate the array by n
 *
 * Example 1:
 * Input: N = 5, array[] = {1,2,3,4,5}
 * Output: 2,3,4,5,1
 * Explanation: Since all the elements in array will be shifted
 *              toward left by one so ‘2’ will now become the
 *              first index and and ‘1’ which was present at
 *              first index will be shifted at last.
 *
 * Example 2:
 * Input: N = 1, array[] = {3}
 * Output: 3
 * Explanation: Here only element is present and so
 *              the element at first index will be shifted to
 *              last index which is also by the way the first index.
 */
#include <stdio.h>

/*
 * COMPLEXITY ANALYSIS:
 *  Time complexity : O(N)    // we trasverse through entire array
 *  Space complexity: 1       // we are not creating any memory
 */
void left_shift_array_by_one(int arr[], int size) {
  int tmp = arr[0];
  int old_posititon = 0;

  for (int i = 1; i < size; i++ )
    arr[old_posititon++] = arr[i];

  /* finally appending the first element to last */
  arr[size - 1] = tmp;
}


int main() {
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int rotate = 5;

  while (rotate) {
    left_shift_array_by_one(arr, size);
    rotate--;
  }

  /* printing the final shifted array */
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n\n");

  return(0);
}
