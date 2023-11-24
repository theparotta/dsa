#include <stdio.h>
#include <string.h>

/*
 * Complexity Analysis:
 *  Time Complexity  - O(N)  // as we loop through the entire array
 *  Space Complecity - O(N)  // as we create new array to store reversed string
*/

void reverse_str(char[], char[], int);

int main() {
  char str[100];
  char reversed_str[100];

  printf("Enter an input string: ");
  fgets(str, 99, stdin);
  
  reverse_str(str, reversed_str, strlen(str));
  puts(reversed_str);

  return 0;
}

void reverse_str(char str[], char reversed_str[], int len) {
    for (int i=len-1, j=0; i >= 0; i--, j++)
        *(reversed_str + j) = *(str + i);
}
