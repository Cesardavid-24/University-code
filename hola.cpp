#include <iostream>

using namespace std;

//como sumar elemetos de un arreglo e imprimirlos en pantalla con C++

int main () {
    //declaramos el arreglo para luego llenarlo con los datos
    int numeros[10] = {2,4,6,8,10,12,14,16,18,20};
    //creamos una variable para almacenar el total de la suma del arreglo
    // inicializada en 0 para evitar que el programa coloque un valor basura
    int resultado = 0;
    //creamos un ciclo for para recorrer cada valor dentro del arreglo
    for(int i = 0;i < 10; i++){
        //realizamos la suma y la almacenamos detro de la variable resultado
        resultado = resultado + numeros[i];
    }
    //por ultimo mostramos por consola el resultado de la suma del arreglo
    std::cout<< "El resultado de la suma es: " << resultado << std::endl;

    return 0;
}

