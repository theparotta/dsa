#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_perfect_number(int input) {
  /* STEPS:
   * ======
   * 1. find all the factors of the input
   *      a. find the square root of the number
   *      b. setup loop till that number
   *      c. check if each number divides the input, if yes then it's a factor
   * 2. calculate the sum, excluding the number
   * 3. check if it's equal to input or not
   *
   * COMPLEXITY ANALYSIS:
   * ====================
   * Time complexity  : O( sqrt(N) )   # as we loop from 2 to square root for the input number
   * Space complexity : O(1)
  */

  int sum = 0;

  printf("\nFactors of %d: 1", input);

  for (int i = 2; i < (int) sqrt(input) + 1; i++) {
    if (input % i == 0) {
      sum += i;
      sum += (input / i);
      printf(", %d, %d", i, input/i);
    }
  }

  // 1 is added as 1 is always a factor of any number
  return (sum + 1) == input;
}



int main() {
  int input;

  printf("Enter a number to check perfect_number or not: ");
  scanf("%d", &input);

  bool status = is_perfect_number(input);

  if (status) puts("\nIt's a PERFECT NUMBER");
  else puts("\nIt's NOT A PERFECT NUMBER");

  return(0);
}
