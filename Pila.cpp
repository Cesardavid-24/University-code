#include <iostream>
struct Nodo {
    int valor;
    Nodo *siguiente;
};
void insertar_dato(Nodo *pila , int valor){
    //crear el espacio en memoria   
    Nodo *nodo_nuevo = new Nodo();
    //insertar el valor dentro del nodo
    nodo_nuevo->valor = valor;
    //cargar el puntero al siguiente nodo
    nodo_nuevo->siguiente = pila;
    //asignar el nuevo nodo a la pila
    pila = nodo_nuevo;
    std::cout<<"Dato insetado correctamente."<<std::endl;
}
int main () {
    int numero = 5; 
    Nodo *pila = NULL;

    insertar_dato(pila, numero);

    return 0;
}