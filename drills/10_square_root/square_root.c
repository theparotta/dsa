/* STEPS (get_square_root):
 * ========================
 * 1. setup a loop to start from 1
 * 2. each time check i * i should less than input
 * 3. check i * i is equal to input
 *      a. if yes, its a square number return it
 *      b. if no, return current value of i - 1
 *
 *
 * STEPS (using binary search):
 * ===========================
 * 1. setup two pointers to point to low and high value
 * 2. high value can be input / 2, as the square root is lower than this value
 * 3. setup a loop to terminate when low value is greater than high value
 * 4. calculate mid value ie. (high + low) / 2
 * 5. check if mid * mid gives the input, if yes return it, and end
 *
 * 6. if mid * mid is lower than input, then
 *      low......mid......high
 *      ----------   ignore the lower range
 *      updating low as mid + 1, also set the output to mid value
 *
 * 7. if mid * mid is higher than input, then
 *      low......mid......high
 *                ----------   ignore this high range
 *      update the high as mid -1
 *
 * 8. so every time we loop through, we are ignoring a range of values
 */

#include <stdio.h>
#include <math.h>

/* METHOD 01 */
int get_square_root(int input) {
  /* COMPLEXITY ANALYSIS:
   * ====================
   * Time complexity  : O( sqrt(N) )   # as we loop from 2 till square root for the input number
   * Space complexity : O(1)
   */
  int i;

  for (i = 1; (i * i) <= input; i++) {
    if (i * i == input)
      return(i);
  }

  return(i - 1);
}


/* METHOD 02 */
double get_square_root_using_log(int input) {
  /* COMPLEXITY ANALYSIS:
   * ====================
   * Time complexity  : O(1)   # as only on math formula is evaluated
   * Space complexity : O(1)
   */

  // using exponential and logarithm to find the square root of a value
  return exp(log(input) / 2);
}


/* METHOD 03 - Using Binary Search*/
int get_square_root_using_binary_search(int input) {
  /* COMPLEXITY ANALYSIS:
   * ====================
   * Time complexity  : O(log(N))   # dont know how
   * Space complexity : O(1)
   */
  int left_ptr = 1;
  int right_ptr = input / 2;  // as square root will always less than half of the number
  int output;

  while (left_ptr <= right_ptr) {
    int mid_val = (left_ptr + right_ptr) / 2;

    if (mid_val * mid_val == input)
      return mid_val;

    if (mid_val * mid_val < input) {
      left_ptr = mid_val + 1;
      output = mid_val;
    }
    else
      // if mid_val * mid_val > input
      right_ptr = mid_val - 1;
  }

  return output;
}


int main() {
  int input;

  printf("Enter an integer: ");
  scanf("%d", &input);

  int sqrt = get_square_root(input);
  printf("\nSquareRoot of %d: %d\n", input, sqrt);

  double sqrt_math = get_square_root_using_log(input);
  printf("SquareRoot of %d (using math functions): %lf\n", input, sqrt_math);

  int sqrt_binary = get_square_root_using_binary_search(input);
  printf("SquareRoot of %d (using binary search): %d\n", input, sqrt_binary);

  return(0);
}
