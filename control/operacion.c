#include<stdio.h>

/*
Autor: Gyeromer
Descripcion: Division entre dos numeros enteros
*/

/*Declaramos variables*/
int num1 =10;
int num2 = 5;
int resultado = 0;

int main(){
    //Operacion
    printf("\t\nDivisión entre dos números");
    printf("\n------------------------\n");
    printf("Dame el primer número:");
    scanf("%i", &num1);
    resultado =num1 / num2;
    printf("El resultado de dividir %i es %i", num1, num2, resultado);
    return 0;
}