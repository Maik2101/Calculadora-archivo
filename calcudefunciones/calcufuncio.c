#include <stdio.h>

int sumar(int suma1, int suma2){
    int suma;
    suma= suma1 + suma2;
  
    return suma;
}


int restar(int resta1,int resta2){
    int resta;
    resta= resta1 - resta2;
  
    return resta;
}


int multiplicar(int multi1,int multi2){
    int multi;
    multi= multi1 * multi2;
    
    return multi;
}


float dividir(float divi1,float divi2){
    float divi;
    if(divi2 == 0){
 
    return 0;
    }else{
    divi= divi1 / divi2;

    }
    return divi;
}

void imprimir(int sum, int res, int multipl, float divi){
    printf("\nEl resultado de la suma  es: %d", sum);
    printf("\nEl resultado de la resta es: %d", res);
    printf("\nEl resultado de la multiplicacion es: %d", multipl);
    printf("\nEl resultado de la division es: %.2f", divi);
}


int main() {
    int n1, n2, n3;
    int suma, resta, multiplicacion;
    float division;
    int op;
    printf("Insertar primer numero\n");
    scanf("%d", &n1);

    printf("Insertar segundo numero\n");
    scanf("%d", &n2);
    
    suma = sumar(n1,n2);
    resta = restar(n1, n2);
    multiplicacion = multiplicar(n1, n2);
    division = dividir(n1, n2);
    imprimir(suma, resta, multiplicacion,division);
}