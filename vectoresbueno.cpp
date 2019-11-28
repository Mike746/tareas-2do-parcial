/*rodriguez ramirez miguel angel    Grupo:1AV6
VECTORES*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <conio.h>
void imprimir_menu();
void leer_opcion(int &opt);
void leerVector(int *ptrA0, int size, char l);
void imprimirvector(int *ptrA0, int size, char l);
void suma(int *ptrA0,int *ptrB0,int *ptrR0);
void imprimirresultado (int *ptrC0, int size);
void resta(int *ptrA0,int *ptrB0,int *ptrR0);
void productopunto(int *ptrA0,int *ptrB0,int *ptrR0);
void rproductopunto(int *ptrR0);
void productoescalar(int *ptrA0,int *ptrB0,int *ptrR0);
void norma(int *ptrA0);
void vunitario(int *ptrA0);
int main (){
float n;
char regreso;
int opt;
int r;
int A[3];
int* ptrA0=&A[0];
int B[3];
int* ptrB0=&B[0];
int R[3];
int* ptrR0= &R[0];
do {
imprimir_menu();
leer_opcion(opt);
switch (opt){
case 1:
leerVector(ptrA0,3,'A');
imprimirvector(ptrA0,3,'A');
leerVector(ptrB0,3,'B');
imprimirvector(ptrB0,3,'B');
suma(ptrA0,ptrB0,ptrR0);
imprimirresultado(ptrR0,3);
    break;
case 2:
    leerVector(ptrA0,3,'A');
    imprimirvector(ptrA0,3,'A');
    leerVector(ptrB0,3,'B');
    imprimirvector(ptrB0,3,'B');
    resta(ptrA0,ptrB0,ptrR0);
    imprimirresultado(ptrR0,3);
    break;
case 3:
    leerVector(ptrA0,3,'A');
    imprimirvector(ptrA0,3,'A');
    leerVector(ptrB0,3,'B');
    imprimirvector(ptrB0,3,'B');
    productopunto(ptrA0,ptrB0,ptrR0);
    imprimirresultado(ptrR0,3);
    rproductopunto(ptrR0);
    break;
case 4:
    leerVector(ptrA0,3,'A');
    imprimirvector(ptrA0,3,'A');
    leerVector(ptrB0,3,'B');
    imprimirvector(ptrB0,3,'B');
    productoescalar(ptrA0,ptrB0,ptrR0);
    break;
case 5:
    leerVector(ptrA0,3,'A');
    imprimirvector(ptrA0,3,'A');
    norma(ptrA0);
    break;
case 6:
    leerVector(ptrA0,3,'A');
    imprimirvector(ptrA0,3,'A');
    vunitario(ptrA0);
    break;
default:
    printf("opcion invalida elige una entre 1 y 6 \n ");
    }
    printf ("\n \n quieres hacer otra operacion: S N \n");
    regreso=getch();
}
while (regreso=='s'|| regreso=='S');
}
void imprimir_menu(){
printf("introduce una opcion \n");
printf("1.-suma \n");
printf("2.-resta \n");
printf("3.-producto punto \n");
printf("4.-producto escalar \n");
printf("5.-norma \n");
printf("6.-vector unitario \n");
}
void leer_opcion(int &opt){
scanf ("%d", &opt);
}

void leerVector(int *ptrA0, int size, char l){
for (int i=0;i<size;i++){
printf ("\n introduce el valor de V%c [%d]:",l,i);
    scanf ("%d", ptrA0+i);
}
}
void imprimirvector(int *ptrA0,int size, char l){
for (int i=0;i<size;i++){
    printf("\n [%d]:%d",i,*(ptrA0+i));
}
}
void imprimirresultado(int *ptrR0,int size){
for (int i=0; i<3;i++){
    printf("\n tu vector resultante es: Vr[%d]=%d",i,*(ptrR0+i));
}
}

void suma (int *ptrA0, int *ptrB0, int *ptrR0) {
    for (int i=0;i<3;i++){
*(ptrR0+i)= *(ptrA0+i)+ *(ptrB0+i);
    }
}
void resta(int *ptrA0,int *ptrB0,int *ptrR0){
for (int i=0;i<3;i++){
*(ptrR0+i)= *(ptrA0+i)- *(ptrB0+i);
    }
}
void productopunto(int *ptrA0,int *ptrB0,int *ptrR0){
for (int i=0;i<3;i++){
*(ptrR0+i)= *(ptrA0+i)* *(ptrB0+i);
    }
}
void rproductopunto(int *ptrR0){
int r;
int ref_r;
ref_r= *(ptrR0)+*(ptrR0+1);
r=ref_r+*(ptrR0+2);
printf ("\n tu resultado de producto punto es: %d",r);
}

void norma(int *ptrA0){
int r;
float t;
int ref_r;
ref_r= *(ptrA0)**(ptrA0)+*(ptrA0+1)**(ptrA0+1);
r=ref_r+*(ptrA0+2)**(ptrA0+2);
t= sqrt(r);
printf ("\n tu resultado de norma es: %f",t);
}

void productoescalar(int *ptrA0,int *ptrB0,int *ptrR0){
int a;
int b;
int c;
a=(*(ptrA0)**(ptrB0+1))-(*(ptrA0+1)**(ptrB0));
b=(*(ptrA0)**(ptrB0+2))-(*(ptrA0+2)**(ptrB0));
c=(*(ptrA0+1)**(ptrB0+2))-(*(ptrA0+2)**(ptrB0+1));
printf("\n tu vector resultnte es Vr[0]:%d", a);
printf("\n tu vector resultnte es Vr[1]:%d", b);
printf("\n tu vector resultnte es Vr[2]:%d", c);
}
void vunitario(int *ptrA0){
float v0;
float v1;
float v2;
int r;
float t;
int ref_r;
ref_r= *(ptrA0)**(ptrA0)+*(ptrA0+1)**(ptrA0+1);
r=ref_r+*(ptrA0+2)**(ptrA0+2);
t= sqrt(r);
v0= *(ptrA0)/t;
v1= *(ptrA0+1)/t;
v2= *(ptrA0+2)/t;
printf("\n tu vector resultante es \n Vr[0]=%f \n Vr[1]=%f \n Vr[2]=%f \n",v0,v1,v2);
}
