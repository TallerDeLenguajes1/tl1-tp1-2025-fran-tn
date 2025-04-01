#include <stdio.h>

int calcularCuadrado(int numero);

void cuadradoVoid(int numero);

void mostrarDatos(int mostrar);

void invertir(int *puntero1, int *puntero2);

void ordenar(int *puntero3, int *puntero4);

int main()
{
    int numero, cuadrado, mostrar;
    int invertir1, invertir2, *puntero1, *puntero2;
    int orden1, orden2, *puntero3, *puntero4;

    puntero1 = &invertir1;
    puntero2 = &invertir2;
    puntero3 = &orden1;
    puntero4 = &orden2;

    
    printf("Ingrese un numero para calcular su cuadrado: ");
        scanf("%d", &numero);
    
    cuadrado = calcularCuadrado(numero);
        printf("\n El cuadrado de %d utiliando la funcion 1 es: %d",numero, cuadrado);
        
    cuadradoVoid(numero);

    printf("\n Ingrese un entero para mostrar los datos de su variable: ");
        scanf("%d", &mostrar);
        mostrarDatos(mostrar);
        
    printf("\n Ingrese dos numeros para invertir sus posiciones");
        printf("\n numero 1: ");
            scanf("%d", &invertir1);
        printf("\n numero 2: ");
            scanf("%d", &invertir2);
    
    invertir(puntero1, puntero2);
    printf("\n Ahora el numero1 es: %d y el numero2 es: %d", *puntero1, *puntero2);
    
    printf("\n Ingrese dos numeros ordenarlos");
        printf("\n Numero1: ");
            scanf("%d", &orden1);
        printf("\n Numero2: ");
            scanf("%d", &orden2);
            
    ordenar(puntero3, puntero4);
    printf("\n El numero mayor es: %d y el numero menor es: %d", *puntero3, *puntero4);
    
    return 0;
}











int calcularCuadrado(int numero)
{
    int resultado;
    resultado = numero * numero;
    return resultado;
}

void cuadradoVoid(int numero)
{
    printf("\n El cuadrado de %d utilizando la funcion VOID es: %d", numero, numero*numero);
}

void mostrarDatos(int mostrar)
{
    printf("\n El contenido de la variable es: %d", mostrar);
    printf("\n La direccion de memoria de la variable es: %p", &mostrar);
}

void invertir(int *puntero1, int *puntero2)
{
    int aux1, aux2;
    
    aux1 = *puntero1;
    aux2 = *puntero2;
    
    *puntero1 = aux2;
    *puntero2 = aux1;
}

void ordenar(int *puntero3, int *puntero4)
{
    int mayor, menor;
    
    if(*puntero3 > *puntero4)
    {
        mayor = *puntero3;
        menor = *puntero4;
    } else {
        mayor = *puntero4;
        menor = *puntero3;
    }
}


