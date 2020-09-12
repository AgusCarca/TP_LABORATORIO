#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int a=0;
    int b=0;
    int opcion;


    do{
            //OPCIONES DEL USUARIO
        printf ("BIENVENIDO A LA CALCULADORA DE AGUSTIN CARCACHA\n\n\n");
        printf("\n 1- Ingresar primer operando A= %d . \n 2-Ingresar segundo operando B= %d . \n 3-Calcular todas las operaciones. \n 4-Mostrar resultados.\n 5-Salir de la calculadora.\n\n",a,b);
        scanf("%d", &opcion);
        system ("CLS");
        switch (opcion){

            case 1:
                printf ("Ingrese el primer numero: "); //SE PIDE EL PRIMER NUMERO
                a = PedirNumero();
                break;

            case 2:
                printf("Ingrese el segundo numero: "); //SE PIDE EL SEGUNDO NUMERO
                b = PedirNumero();
                break;

            case 3: // Aca se calculan todas las operaciones
                Sumar(a,b);
                Restar(a,b);
                Dividir (a,b);
                Multiplicar(a,b);
                Factorial(a);
                Factorial(b);

            case 4: //SE MUESTRAN LOS RESULTADOS POR PRINTF
            printf ("La suma de a+b es: %d\n", Sumar(a,b));
            printf ("La resta de a-b es: %d\n", Restar(a,b));
            printf ("La division de a/b es: %d\n", Dividir(a,b));
            printf ("La multiplicacion de a*b es: %d\n", Multiplicar(a,b));
            printf ("El factorial de a es: %d\n", Factorial(a));
            printf ("El factorial de b es: %d\n", Factorial(b));

            /*case 5:
                printf ("\n Saliendo...\n");
                break;
            */

        }

    } while (opcion!=5);

    return 0;




}
