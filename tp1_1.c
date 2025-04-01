#include <stdio.h>
int main()
{   
    
    printf("\n Hola mundo");

    int numero = 7, *puntero;
        puntero = &numero;
        
    printf("EL contenido del puntero es: %p", puntero);
    printf("\n La direccion de memoria almacenada por el puntero es: %p", puntero);
    printf("\n La direccion de memoria de la variable es: %p", &numero);
    printf("\n La direccion del puntero es: %p", &puntero);
    printf("\n El tamaño de memoria de la variable es: %zu bytes", sizeof(numero));

   
    return 0;
}