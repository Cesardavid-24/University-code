#include <iostream>
using namespace std;
//declaramos la estrcutura con los tipos de datos que queremos almacenar 
struct Persona{
    /* data */
    string nombre;
    int edad;
    float altura;
    string direccion; 
};
int main(){
    //creamos una estructura persona
    Persona persona;
    //asignamos valores a los campos de la estructura de la siguiente manera.
    persona.nombre = "Cesar";
    persona.edad = 18;
    persona.altura = 1.63;
    persona.direccion = "Calle Madrid";
    //para imprimir los valores de cada campo de la estructura 
    std::cout<<persona.nombre<<std::endl;
    std::cout<<persona.edad<<std::endl;
    std::cout<<persona.altura<<std::endl;
    std::cout<<persona.direccion<<std::endl;

    return 0;
}