#include <iostream>
struct Nodo{
    int valor;
    Nodo *siguiente;
};
void mostrarNodo(Nodo *&pila){
  Nodo *nodo_auxiliar = pila;
  if (nodo_auxiliar != NULL){
    while (nodo_auxiliar != NULL){
      std::cout<<nodo_auxiliar->valor << std::endl;
      nodo_auxiliar = nodo_auxiliar->siguiente;
    }
    delete nodo_auxiliar;
    }
    else{
      std::cout<<"La pila esta vacia"<<std::endl;
    }
}
void crearNodo(Nodo *&pila, int dato){
    Nodo *nodo_nuevo = new Nodo();
    nodo_nuevo->valor = dato;
    nodo_nuevo->siguiente = pila;
    pila = nodo_nuevo;
    std::cout<<"Dato insetado"<<std::endl;
}
void eliminarNodo(Nodo *&pila, int &dato){
    Nodo *nodo_auxiliar = pila;
    dato = nodo_auxiliar->valor;
    pila = nodo_auxiliar->siguiente;
    delete nodo_auxiliar;
   
}
int main(){
    Nodo *pila = NULL;
    int dato;
    crearNodo(pila, 5);
    crearNodo(pila, 6);
    crearNodo(pila, 7);
    mostrarNodo(pila);         
    while (pila != NULL){
        eliminarNodo(pila,dato);
        if(pila != NULL){
            std::cout<<dato<<" <- ";
        } else{
            std::cout<<dato<<".";
        }
    }    
    system("pause");        
    return EXIT_SUCCESS;
}