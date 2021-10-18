#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;

  x=0;
  y=1;
 
 
  for (cont=10;cont>=0;cont=cont-2){
      //x=cont+y;
      printf("\tvalor: %d\n",cont);
      y++;
      /*x=y;
      y=z;*/
  }
  printf("Valor final: %d\n",cont);
  getchar();
  return 0;
}

