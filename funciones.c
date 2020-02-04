#include <stdlib.h>
#include "funciones.h"

float suma(float num1, float num2) {
    return num1 + num2;
}
float resta(float num1, float num2) {
    return num1 - num2;
}
float division(float num1, float num2) {
    return num1 / num2;
}
float multiplicacion(float num1, float num2){
    return num1 * num2;
}
int factorial(int numero) {
    int factorial = 1, contador;
    for(contador = 1; contador <= numero; contador++) {
        factorial = factorial * contador;
    }
    return factorial;
}
float pedirNumero(char texto[]){
    float numero;
    printf("%s", texto);
    scanf("%f", &numero);
    return numero;
}
void mostrar(char texto[], float numero){
    if(numero == (int)numero){
        printf("%s %i \n", texto, (int)numero);
    } else {
        printf("%s %.2f \n", texto, numero);
    }
}
