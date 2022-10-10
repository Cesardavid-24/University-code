//Traemos la libreria
#include <iostream>
//Indicamos las funciones a usar de la libreria estandar
using std::cout;
using std::endl;
//declaramos una constante global
constexpr int SIZE = 4;
//funcion para intercambiar un elemento entre dos arreglos
//recibe dos argumentos por referencia
void swapArrayElements(int* arreglo1, int* arreglo2){
    //declaramos una variable auxiliar y le asignamos el valor del puntero
    int auxiliar = *arreglo1;
    //intercambiamos los valores
    *arreglo1 = *arreglo2;
    //luego vaciamos la variable auxiliar dentro del puntero que dejamos en nulo
    *arreglo2 = auxiliar;
}
//funcion para imprimir un arreglo
//recibe un arreglo por referencia que debe ser de la dimension declarada
//en la variable global
void printArray(int (&arreglo)[SIZE]){
    //declaramos una constante item que contendra la direcion de memoria
    //de cada elemento asociado al puntero
    for (const auto &item : arreglo){
        //mostramos por consola el valor que contiene el puntero item!
        cout << item << ", ";
    }
    cout << endl;
}
int main(){
    //declaramos dos arreglos y le asignamos los valores[4]
    int array1[] = { 11, 42, 53, 44 };
    int array2[] = { 10, 21, 30, 99 };
    //llamamos a la funcion antes del intercambio
    printArray(array1);
    printArray(array2);
    cout << endl;
    //llamamos la funcion para realizar el intercambio
    swapArrayElements(&array1[0], &array2[0]);
    //volvemos a imprimir los arreglos intercambiados 
    printArray(array1);
    printArray(array2);
    cout << endl;
    //retornamos el codigo de estado de ejecucion!
    return EXIT_SUCCESS;
}