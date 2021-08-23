/*we should capitalize the cities written in lower case letters and write them lowercase*/

#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){
    char *cities[]={"istanbul","ankara","izmir","kocaeli","trabzon","samsun"};
    int i,j;
    printf("Turkish's Cities  \n\n");
   char tmpchar;
   for (i=0; i<6; i++) {
    j=0;
    while (cities[i][j] != 0) {
      tmpchar = cities[i][j];
      if ((cities[i][j] >= 'a') && (cities[i][j] <= 'z')) {
	tmpchar = cities[i][j] - 32;
      }
      printf("%c", tmpchar);
      j++;
    }
    printf("\n");
  }
    getch();
    return 0;
}