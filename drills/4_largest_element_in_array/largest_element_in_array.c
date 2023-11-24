/*
Given an array of size 'n', find the largest element in the array

Sample input 1:
6
4 7 8 6 7 6
Sample output 1:
8

Explanation of sample input 1:
The answer is 8.
From {4 7 8 6 7 6}, 8 is the largest element.

Expected Time Complexity:
O(n), Where ‘n’ is the size of an input array ‘arr’.

Constraints :
1 <= 'n' <= 10^5
1 <= 'arr[i]' <= 10^9
Time Limit: 1 sec
*
*/

#include <stdio.h>

/*
 * COMPLEXITY ANALYSIS:
 *  Time complexity : O(N)  // we trasverse through the entire array
 *  Space complexity: 1     // we are not occuping any memory
 */
int largest_element(int arr[], int size) {
  int big = *(arr);

  for (int i = 0; i < size; i++) {
    if (*(arr + i) > big)
      big = *(arr + i);
  }

  return big;
}


int main() {
  int arr[] = {5, 9, -44, 3, 4, 32, 8, 4, 3, 10 -3};

  printf("Largest : %d\n", largest_element(arr, sizeof(arr)/sizeof(arr[0]) ) );
  return 0;
}
