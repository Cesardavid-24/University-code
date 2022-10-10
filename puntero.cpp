#include <iostream>
using namespace std;

//Apuntadores o Punteros C++
int main(){
    //declaramos una variable de tipo string
    string food = "Cesar";
    //luego declaramos la variable de tipo puntero y tipo string
    //y le asingnamos la direccion de memoria de la variable food
    string* puntero = &food;
    //imprime el valor de la variable de tipo puntero
    cout<<puntero<<endl;
    //imprime la direccion de memoria de la variable de tipo puntero
    cout<<&puntero<<endl;
    //imprime el valor que contiene la direccion de memoria del puntero.
    cout<<*puntero<<endl;
    
    return 0;
}
