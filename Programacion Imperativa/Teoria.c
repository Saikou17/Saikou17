#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//pointers and memory
void punteros(){
    int a = 10;
    int b = 5;
    int* ptr = &a;
    int* ptr2 = &b;
    printf("%p\n",&a); //** Impresion de la direccion de memoria de la variable **//
    printf("%p\n",ptr); //** Impresion de direccion que guarda el puntero en memoria **//
    printf("%i\n",*ptr); //Valor de la variable
    //* Operaciones aritmeticas con punteros *//
    printf("%p\n",ptr2); //* Este puntero apunta a la direecion o al bloque de memoria en la que esta la variable *//
    ptr2 += 2;
    printf("%p\n",ptr2); //* Este puntero apunta al siguiente bloque por que se le sumo uno *//
    //* Arreglos y Punteros *//
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //* Creacion de un arreglo *//
    int* ptr3 = &arr[9]; //* El puntero apunta al ultimo elemento *//
    for(int i=0; i < 10; i++){ //* Se recorre e imprime los elementos del arreglo de manera aritmetica con punteros *//
        printf("%i\n",*ptr3);
        ptr3--;
    }
}

int main(){
    #ifdef leccion1
        punteros();
    #endif
    return 0;
}