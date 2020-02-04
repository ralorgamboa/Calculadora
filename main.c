#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    float num1;
    float num2;
    float resultado;
    int opcion = 0;
    int flagNum1 = 0;
    int flagNum2 = 0;
    int flagResultado;

    while(seguir=='s')
    {
        if(flagNum1 == 1){
            printf("1- Ingresar 1er numero A=\n", num1);
        } else {
            if(flagNum1 == 0) {
                printf("1- Ingresar 1er numero (A=x)\n");
            }
        }
        if(flagNum2 == 1){
            printf("2- Ingresar 2do numero B=\n", num2);
        } else {
            if(flagNum2 == 0) {
                printf("2- Ingresar 2do numero (B=y)\n");
            }
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);
        flagResultado = 0;

        switch(opcion)
        {
            case 1:
                num1 = pedirNumero("Ingrese el primer numero: ");
                flagNum1 = 1;
                break;
            case 2:
                num2 = pedirNumero("Ingrese el segundo numero: ");
                flagNum2 = 1;
                break;
            case 3:
                if(flagNum1 == 0 || flagNum2 == 0){
                    printf("ERROR, Faltan operadores\n");
                    break;
                }
                resultado = suma(num1, num2);
                flagResultado = 1;
                break;
            case 4:
                if(flagNum1 == 0 || flagNum2 == 0){
                    printf("ERROR, Faltan operadores\n");
                    break;
                }
                resultado = resta(num1, num2);
                flagResultado = 1;
                break;
            case 5:
                if(flagNum1 == 0 || flagNum2 == 0){
                    printf("ERROR, Faltan operadores\n");
                    break;
                }
                if(num2 == 0){
                    printf("ERROR, No es posible realizar la division por 0 \n");
                    break;
                }
                resultado = division(num1, num2);
                flagResultado = 1;
                break;
            case 6:
                if(flagNum1 == 0 || flagNum2 == 0){
                    printf("ERROR, Faltan operadores\n");
                    break;
                }
                resultado = multiplicacion(num1, num2);
                flagResultado = 1;
                break;
            case 7:
                if(flagNum1 == 0){
                    printf("ERROR, Faltan operadores\n");
                    break;
                }
                if(num1 != (int)num1 || num1 <= 0){
                    printf("ERROR, No es posible realizar el  factorial\n");
                }
                resultado = factorial((int)num1);
                flagResultado = 1;
                break;
            case 8:
                if(flagNum1 == 0 || flagNum2 == 0){
                    printf("ERROR, Faltan operadores\n");
                    break;
                }
                resultado = suma(num1, num2);
                mostrar("La suma es: ", resultado);
                resultado = resta(num1, num2);
                mostrar("La resta es: ", resultado);
                resultado = multiplicacion(num1, num2);
                mostrar("La multiplicacion es: ", resultado);
                if(num2 == 0){
                    printf("ERROR, No es posible realizar la division por 0 \n");
                } else {
                    if(num2 != 0){
                        resultado = division(num1, num2);
                        mostrar("La division es: \n", resultado);
                    }
                }
                if(num1 != (int)num1 || num1 <= 0){
                    printf("ERROR, No es posible realizar el factorial\n");
                } else {
                    if(num1 == (int)num1 && num1 > 0){
                        resultado = factorial((int)num1);
                        mostrar("El factorial es: \n", resultado);
                    }
                }
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Ingrese una opcion valida \n");
                break;
        }

        if(flagResultado == 1){
            mostrar("El resultado es: \n", resultado);
        }
    }
    return 0;
}
