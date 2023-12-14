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
 *
 *
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
   * Time complexity  : O(1)   # as only on math formula is evaluated
   * Space complexity : O(1)
   */



}


int main() {
  int input;

  printf("Enter an integer: ");
  scanf("%d", &input);

  int sqrt = get_square_root(input);
  printf("SquareRoot of %d: %d\n", input, sqrt);

  double sqrt_math = get_square_root_using_log(input);
  printf("SquareRoot of %d (using math functions): %lf\n", input, sqrt_math);

  return(0);
}
