//Numbers to string II (slightly esoteric)
/*First we will use the snprintf() function in a roundabout way to determine the number of bytes that the numeric to string conversion will result in.
 Then we will use malloc() to allocate a new string (character array) of that length. Finally we will use sprintf() to write to that character array. 
The first step ensures that we have a character array (a string) that is just the right length to recieve the converted numeric: not too small, and not too big.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main(void) {

  int size;
  int x;
  printf("Enter an integer number : ");
  scanf("%d",&x);
  
  size = snprintf(NULL, 0, "%d", x);
  char *xc = malloc(size + 1);
  sprintf(xc, "%d", x);

  double y;
  printf("Enter a double number : ");
  scanf("%lf",&y);
  size = snprintf(NULL, 0, "%.4f", y);
  char *yc = malloc(size + 1);
  sprintf(yc, "%.4f", y);

  printf("xc = %s\n", xc);
  printf("yc = %s\n", yc);

  free(xc);
  free(yc);
  getch();
  return 0;
}