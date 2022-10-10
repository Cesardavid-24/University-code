#include <iostream>
/*Memoria Stack
    en la memoria stack almacena tipos de datos primitivos, funciones y llamadas.
    que son usados en ambito local
    o global y su memoria es liberada por el propio sistema en cuanto su alcanze termina
    Tipo de datos primtivos: int float double char string etc.
*/
//funcion almacenada en memoria stack
int suma(int numero_1 , int numero_2){
    return numero_1 + numero_2;
}

int main(){
//variables almacenada en la memoria stack
    int numero = 10;
    int numero_2 = 20;
    int resultado; 

    resultado = suma(numero , numero_2);

    std::cout<<resultado<<std::endl;
    //antes del llamado al return el compilador hace un llamado a la funcion delete por defecto.
    //y asi liberar la memoria stack automaticamente.
    return 0;
}