/*rodriguez ramirez miguel angel    Grupo:1AV6
MATRICES*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iostream>


using namespace std;
void menu_principal ();
void leer_opcion(int &opt);
void scanVector(int *ptr, int size);

void printMatrix(int *ptr,int size1, int size2);
void imprimir_matriz(int arr[3][3]);
void suma_matrices(int *prtC, int *ptr2b, int *ptr2a, int d);
void resta_matrices(int *prtC, int *ptr2b, int *ptr2a, int d);
void mult_matrices(int *ptr, int *ptr2b, int *ptr2, int &ss);
void fac(int *ptr, int *ptr2b, int f, int c, int &o, int &ret);

int main(){
int opt, o = 3;
float n,e;
char rep;


int a[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int b[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int c[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int *ptrC = &c[0][0];
int *ptr2a = &a[0][0];
int *ptr2b = &b[0][0];

printf("La matriz 1 es:\n");
printMatrix(ptr2a,3,3);
printf("La Matriz 2 es:\n");
printMatrix(ptr2b,3,3);
do{
menu_principal ();
leer_opcion(opt);
switch(opt){

case 1:
printf("La suma es:\n");
suma_matrices(ptrC, ptr2b, ptr2a,3);
break;

case 2:
printf("La resta es:\n");
resta_matrices(ptrC, ptr2b, ptr2a,3);
break;

case 3:
printf("La multiplicacion es:\n");
mult_matrices(ptr2a, ptr2b, ptrC,o);
break;
default:
printf("opcion invalida\n");
break;
}
printf("quieres hacer otra operacion s\n");
rep = getch();} while((rep=='S') || (rep=='s'));
}
void scanVector(int *ptr,int size){
int valor;for (int i=0; i<size; i++){
for(int j = 0; j < size ; j++){
printf("[%d][%d]: \n",i,j);
scanf("%d",&valor);
*(ptr+j+(i*size)) = valor;
}
}
}
void printMatrix(int *ptr,int size1, int size2){
for(int i = 0; i < size1 ; i++){
for(int j = 0; j < size2 ; j++){
printf("%d",*(ptr+j+(i*size1)));
}
printf("\n");
}
}
void imprimir_matriz(int arr[3][3]){
for(int i = 0; i < 3; i++){
for(int j = 0; j < 3; j++){
printf("%d",arr[i][j]);
}
printf("\n");
}
}
void suma_matrices(int *ptr, int *ptr2b, int *ptr2, int ss){
int suma =0;
for(int i = 0; i<ss; i++){
for(int j = 0; j<ss; j++){
*(ptr+j+(i*ss)) = *(ptr2+j+(i*ss))+ *(ptr2b+j+(i*ss)) ;
printf("%d   ",*(ptr+j+(i*ss)));
}
printf("\n");}}
void resta_matrices(int *ptr, int *ptr2b, int *ptr2, int ss){
int suma =0;
for(int i = 0; i<ss; i++){
for(int j = 0; j<ss; j++){
*(ptr+j+(i*ss)) = *(ptr2+j+(i*ss)) - *(ptr2b+j+(i*ss));
printf("%d   ",*(ptr+j+(i*ss)));
}
printf("\n");
}
}
void mult_matrices(int *ptr2, int *ptr2b, int *ptr, int &ss){
int v=0;
for(int i=0; i<ss; i++){
for(int j =0; j<ss;j++){
fac(ptr2,ptr2b,i,j,ss,v);
*(ptr+j+(i*ss))=v;
printf("%d",*(ptr+j+(i*ss)));
}
printf("\n");
}
}
void fac(int *ptr2, int *ptr2b, int f, int c, int &o, int &ret){
ret = 0 ;
for(int i=0; i<o; i++){
ret += (*(ptr2+i+(f*o)))*(*(ptr2b+c+(i*o)));
}
}

void menu_principal(){
printf("1.-Suma de Matrices\n");
printf("2. Resta de Matrices\n");
printf("3. Multiplicacion de Matrices\n");
}
void leer_opcion(int& opt){
printf("\n elije una opcion\n");
scanf("%d",&opt);
}
