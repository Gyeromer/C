#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x,y,z,cont,paro;
  x=0;
  y=1;
  printf("Cuantos numeros quieres? ");
  scanf("%d", &paro);
  
  if(paro==1){
  	printf("%d\n",x);
  }
  else if(paro==2){
  	printf("%d\n%d\n",x, y);
  /*	printf("%d\n",x);
  	printf("%d\n",y);*/
  }
  else{
  	printf("%d\n%d\n",x, y);
  	for (cont=0;cont<paro;cont++)
 	{
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  	}
  getchar();
  }
  return 0;
}
