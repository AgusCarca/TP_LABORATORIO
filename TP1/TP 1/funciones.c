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
float Dividir (int x, int y){
    int divisionResultado;
    if (x==0||y==0){
            printf ("No se puede dividir por cero.");
    } else {
        divisionResultado=(float)x/y;
    }



}
//Multiplica los dos numeros
int Multiplicar(int x, int y){
    int multiplicacionResultado;
    multiplicacionResultado=x*y;
    return multiplicacionResultado;
}

//Recibe el numero entero y devuelve el factorial

int Factorial (int numero){

    int factorizar = 1;
    if (numero==0){
        factorizar=1;
    } else {
        for (int i=1;i<=numero;i++){
            factorizar = factorizar *i;
        }
    }


    return factorizar;


}




