//formas de declarar y manipular arreglos bidimensionales o matrices en C++
//# numero 1
//declara la libreria de entrada y salida
#include <iostream>
#include <vector>

using namespace std;
//funcion que arranca el programa
int main(){
    //forma numero #1 de declarar una matriz en este caso de 2 fila por 5 columnas
    int numeros[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}};
    //creamos el ciclo que controla las filas
    for(int fila = 0; fila < 2;fila++){
        //creamos el ciclo que controla las columnas
        for(int columna = 0;columna < 5; columna++){
            //mostramos por consola los valores dentro de la matriz
            cout<< numeros[fila][columna]<< " ";
        }
        cout<<endl;
    }
    
    //indicamos al programa que todo ha ido bien retornando 0
    return 0;
}