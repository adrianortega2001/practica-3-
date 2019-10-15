#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void imprimir_menu();
void leer_opcion(int&opt);
int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x, int y);
int division(int x, int y);
int leer_valor();

int main(){
int a, b,c;
int opt;
char repetir;
do{
imprimir_menu();
leer_opcion(opt);
a=leer_valor();
b=leer_valor();
switch (opt){
case 1:
    c=suma(a,b);
    break;
case 2:
    c=resta(a,b);
    break;
case 3:
    c=multiplicacion(a,b);
    break;
case 4:
    c=division(a,b);
    break;
default:
    printf("Opcion invalida ");
}
printf("El resultado es %d \n",c);
printf("Desea hacer otra operacion S N:\n");
repetir=getch();
}while(repetir=='s' || repetir=='S');
}

void imprimir_menu(){
printf("1 Suma\n");
printf("2 Resta\n");
printf("3 Multiplicacion\n");
printf("4 Division\n");
}
void leer_opcion(int&opt){
    printf("Introduce una opcion:\n");
    scanf("%d",&opt);
}
int suma(int x, int y){
return x+y;
}
int resta(int x, int y){
return x-y;
}
int multiplicacion(int x, int y){
return x*y;
}
int division(int x, int y){
   while(y==0){
printf("El segundo valor debe ser distinto de cero \n");
printf("Introduce la segunda cantidad:");
        scanf("%d",&y);
}
return x/y;
}

int leer_valor(){
int temp;
printf("Introduce el  valor\n");
scanf("%d",&temp);
return temp;
}



