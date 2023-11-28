/* REMOVE DUPLICATES FROM THE SORTED ARRAY
 * =======================================
 * You are given a sorted integer array of size n
 *
 * Remove the duplicated from the array such that each element appears only once.
 *
 * Return the length of this new array.
 *
 * NOTE:
 * DONT allocate an extra space for a another array. YOu need to do this by
 * modifying the given input array in place with O(1) space complexity.
 *
 * EXAMPLE:
 * inputs: 10, [1,2,2,3,3,3,4,4,5,5]
 * output: 5
 *
 * inputs: 9, [1,1,2,3,3,4,5,5,5]
 * output: 5
 *
 * Expected time complexity is O(n)
 */
#include <stdio.h>

/*
 * COMPLEXITY ANALYSIS:
 *  Time complexity : O(N)    // we trasverse through entire array
 *  Space complexity: 1       // we are not creating any memory
 */
int remove_duplicates(int arr[], int size) {
  int unique_elements = 1;

  int previous = arr[0];

  for (int i = 1; i < size; i++) {
    if (previous != arr[i]) {
      unique_elements++;
      previous = arr[i];
    }
  }

  return unique_elements;
}


int main() {
  int input[] = {0,0,0,0,0,0,3,5,5,5,5,5,5,6};
  int size = sizeof(input) / sizeof(input[0]);

  int unique_elements = remove_duplicates(input, size);
  printf("No of unique elements in array: %d\n", unique_elements);

  return(0);
}
