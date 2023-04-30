#include <stdio.h>
#include "operaciones.h"


void imprimir(int sum, int res, int multi, float divi){
    printf("\nLa suma  es: %d", sum);
    printf("\nLa resta es: %d", res);
    printf("\nLa multiplicacion es: %d", multi);
    printf("\nLa division es: %.2f", divi);
}


int main() {
    int n1, n2, n3;
    int suma, resta, multiplicacion;
    float division;
    int op;
    printf("Ingrese el primer numero\n");
    scanf("%d", &n1);

    printf("Ingrese el segundo numero\n");
    scanf("%d", &n2);
    
    suma = sumar(n1,n2);
    resta = restar(n1, n2);
    multiplicacion = multiplicar(n1, n2);
    division = dividir(n1, n2);
    imprimir(suma, resta, multiplicacion,division);
}