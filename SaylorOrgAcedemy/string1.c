//Numbers to strings

/*The common way of converting a numeric type like an integer or a floating-point number into a string, is to use the sprintf() function. 
It it used much like the printf() function we have seen before, but instead of printing something to the screen, sprintf() "prints" something to a character string. 
Here's how to use it:*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(void) {

  char s1[256];
  char s2[256];
  int i1 = 61;
  double d1 = 3.1453;

  sprintf(s1, "%d", i1);
  sprintf(s2, "%.4f", d1);

  printf("s1 = %s\n", s1);
  printf("s2 = %s\n", s2);
  getch();
  return 0;
}