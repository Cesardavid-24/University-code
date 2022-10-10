// #2 segunda forma de declarar una matriz
#include <iostream>
#include <vector>

using namespace std;

int main (){
    //creamos un objeto del tipo vector dentro de otro de tipo int llamado numeros
    //en este ejemplo le asignamos los valores por defecto 
    vector<vector<int>> numeros {{1,2,3,4,5}, {6,7,8,9,10}};

    //creamos el ciclo que controla las filas
     for(int fila = 0; fila < numeros.size();fila++){
        //creamos el ciclo que controla las columnas
        for(int columna = 0;columna < numeros[fila].size(); columna++){
            //mostramos por consola los valores dentro de la matriz
            std::cout<< numeros[fila][columna]<< " ";
        }
        std::cout<<std::endl;
    }

    //indicamos al programa que todo ha ido bien retornando 0
    return 0;
}

