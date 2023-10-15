#include <stdio.h>
#include <string.h>

int main() {
  char str[100];

  printf("Enter an input string: ");
  fgets(str, 99, stdin);

  unsigned long str_len = strlen(str);
  printf("Size of the string: %lu\n", str_len);

  /* reversing the string and storing it in a array */
  char reversed_str[str_len];
  for (int i=str_len-1, j=0; i >= 0; i--, j++) 
    reversed_str[j] = str[i];

  /* finally adding the string termination character */
  reversed_str[str_len] = '\0';

  printf("Reversed string: %s\n", reversed_str);
  return 0;
}
