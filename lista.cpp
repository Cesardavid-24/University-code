//lista enlazada simple
#include <iostream>

struct Nodo{
    int valor;
    Nodo *siguiente;
};

void insertarLista(Nodo *&Lista,int dato){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->valor = dato;
    Nodo *auxiliar1 = Lista;
    Nodo *auxiliar2;
    while((auxiliar1!=NULL)&&(auxiliar1->valor<dato)){
        auxiliar2 = auxiliar1;
        auxiliar1 = auxiliar1->siguiente;
    }
    if(Lista==auxiliar1){
        Lista = nuevoNodo;
        nuevoNodo->siguiente = auxiliar1;
    }else {
        auxiliar2->siguiente = nuevoNodo;
        nuevoNodo->siguiente = auxiliar1;
    }
}
void mostrarLista(Nodo *&Lista){
   if(Lista!=NULL){
        Nodo *actual = new Nodo();
        actual = Lista;
        while(actual != NULL){
            std::cout<<"Dato: "<<actual->valor<<std::endl;
            actual = actual->siguiente;
        }
    }
}
bool buscarElementoLista(Nodo *&Lista, int dato){
    bool encontrado = false;
    Nodo *actual = new Nodo();
    actual = Lista;
    while((actual!=NULL) && (actual->valor <= dato)){
        if(actual->valor==dato){
            encontrado = true;
        }
        actual = actual->siguiente;
    }
    return encontrado;
}
bool eliminarElementoLista(Nodo *&Lista,int dato){
    bool encontrado = false;
    if(Lista!=NULL){
        Nodo *auxiliar = Lista,*anterior = NULL;
        while((auxiliar!=NULL)&&(auxiliar->valor!=dato)){
            anterior = auxiliar;
            auxiliar = auxiliar->siguiente;
        }
        if(auxiliar==NULL){
            encontrado = false;
        }else if(anterior==NULL){
            Lista = Lista->siguiente;
            delete auxiliar;
            encontrado = true;
        }else {
            anterior->siguiente = auxiliar->siguiente;
            delete auxiliar;
            encontrado = true;
        }
    }
    return encontrado;
}
void eliminarLista(Nodo *&Lista,int &dato){
    if(Lista!=NULL){
        Nodo *auxiliar = new Nodo();
        auxiliar = Lista;
        dato = auxiliar->valor;
        Lista = auxiliar->siguiente;
        delete auxiliar;
    }
}
int main(){
    Nodo *Lista = NULL; 
    int numeroEliminado;
    insertarLista(Lista,5);
    insertarLista(Lista,6);
    insertarLista(Lista,7);
    insertarLista(Lista,8);
    mostrarLista(Lista);
    std::cout<<buscarElementoLista(Lista,7);
    std::cout<<eliminarElementoLista(Lista,6);
    while(Lista!=NULL){
        eliminarLista(Lista,numeroEliminado);
        std::cout<<"se elimino: "<<numeroEliminado<<std::endl;
    }
    return EXIT_SUCCESS; 
}