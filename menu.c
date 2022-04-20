
#include<stdio.h>
#include<stdlib.h>



void resultado(int op){


float a,b;


printf("Dame un numero?:");
scanf("%g",&a);

printf("Dame otro numero?:");
scanf("%g",&b);


switch(op){

case 1:

printf("El  resultado de la suma es:%g\n",a+b);

break;


case 2:

printf("El  resultado de la resta es:%g\n",a-b);

break;


case 3:

printf("El  resultado de la multiplicacion es:%g\n",a*b);

break;

case 4:

printf("El  resultado de la division es:%g\n",a/b);

break;

}


}


void mensaje(){

system("clear");
printf(" -------------------------------\n");
printf("|1.-SUMA             2.-RESTA   |\n");
printf("|3.-MULTIPLICACION   4.-DIVISION|\n");
printf("|           5.-SALIR            |\n");
printf(" -------------------------------\n");


}



int main(){



char opcion;

char resp='s';

int op;


do{

mensaje();
scanf("%c",&opcion);

switch(opcion){


case '1':

do{

system("clear");
printf("SUMA\n");

op=1;

resultado(op);

printf("Realizar otra operacion(s/n)?:");

scanf("%s",&resp);

}while(resp!='n');

break;




case '2':

do{

system("clear");
printf("RESTA\n");

op=2;

resultado(op);

printf("Realizar otra operacion(s/n)?:");

scanf("%s",&resp);

}while(resp!='n');

break;




case '3':

do{

system("clear");
printf("MULTIPLICACION\n");

op=3;

resultado(op);

printf("Realizar otra operacion(s/n)?:");

scanf("%s",&resp);

}while(resp!='n');

break;





case '4':

do{

system("clear");
printf("DIBVISION\n");

op=4;

resultado(op);

printf("Realizar otra operacion(s/n)?:");

scanf("%s",&resp);

}while(resp!='n');

break;











case '5':

printf("Adios\n");

break;





}




}while(opcion!='5');






}





