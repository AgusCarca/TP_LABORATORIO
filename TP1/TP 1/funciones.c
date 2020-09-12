#include "funciones.h"
// Pide un numero entero y regreso el numero ingresado
int PedirNumero(void){
    int numeroEntero;
    scanf("%d", &numeroEntero);
    return numeroEntero;
}


//Suma los dos numeros enteros ingresados
int Sumar(int x, int y){

    int sumaResultado;
    sumaResultado = x+y;
    return sumaResultado;

}
//Resta los dos numeros enteros ingresados
int Restar (int x, int y){

    int restaResultado;
    restaResultado = x-y;
    return restaResultado;

}
//Divide los dos numeros enteros ingresados
float Dividir (float x, float y){

    float divisionResultado;
    if (y==0){

        printf ("No se puede dividir por cero.");
    }
    else{
        divisionResultado=(float) x/y;

    }

    return divisionResultado;

}
//Multiplica los dos numeros
int Multiplicar(int x, int y){
    int multiplicacionResultado;
    multiplicacionResultado=x*y;
    return multiplicacionResultado;
}

//Recibe el numero entero y devuelve el factorial

int Factorial (int numero){
    int factorizar;
    int i;

    factorizar=1;

    for(i=numero; i > 1; i--){
            factorizar = factorizar *1;

    }

    return factorizar;


}




