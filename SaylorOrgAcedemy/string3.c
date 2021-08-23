//Arrays of Strings

/*We have seen that strings are just arrays of characters, terminated by a null character. We have also seen that the variables that hold strings 
(like arrays of other types, e.g. int or double, are actually pointers to the head of the array. We can use an array of pointers, 
where each pointer is a pointer to the head of a character array (in other words a string), to store an array of strings. Here is an example */

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
  char *provinces[] = { "British Columbia", "Alberta", "Saskatchewan", 
                        "Manitoba", "Ontario", "Quebec", "New Brunswick",
                        "Nova Scotia", "Prince Edward Island", "Newfoundland",
                        "Yukon", "Northwest Territories", "Nunavut" };
  int i;
  for (i=0; i<13; i++) {
    printf("provinces[%d] = %s\n", i, provinces[i]);
  }
  getch();
  return 0;
}