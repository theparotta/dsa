/* CHECK SORTED ARRAY
 * ==================
 * You have been given an array 'a' of 'n' non-negative integers. Check if the
 * given array is sorted in the non-decreasing order or not.
 *
 * Return 1 if the given array is sorted, else 0
 *
 * EX 01
 * inputs: n = 5, a = [1,2,3,4,5]
 * output: 1
 *
 * EX 02
 * inputs: n = 4, a = [0,0,0,1]
 * output: 1
 *
 * EX 03
 * inputs: n = 5, a = [4,5,4,4,4]
 * output: 0
 *
 * Expected time complexity: O(N)
 */
#include <stdio.h>


/*
 * COMPLEXITY ANALYSIS:
 *  Time complexity : O(N)    // we trasverse through entire array
 *  Space complexity: 1       // we are not creating any memory
 */
int is_sorted_array(int arr[], int size) {
  int previous = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] >= previous) {
      previous = arr[i];
    }
    else
      return(0);
  }

  return(1);
}


/* Every thing starts here */
int main() {
  int input[] = {4,5,4,4,4};
  int size = sizeof(input) / sizeof(input[0]);

  int status = is_sorted_array(input, size);
  printf("Does the array is sorted in non-decreasing order: %d\n", status);

  return(0);
}
