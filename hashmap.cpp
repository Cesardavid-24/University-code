//HashMap - HashTable en C++
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    //creamos la estructura de datos con una clave de tipo entero
    //y un valor de tipo string 
    map<int, string> Players;
    //agregamos valores a la estructura de datos
    Players.insert(std::pair<int, string>(2, "Cesar David"));
    Players.insert(std::pair<int, string>(1, "Juan Perez"));

    cout << "Number of Players " << Players.size() << endl;
    //Iteramos la estructura usando punteros inteligentes.
    for (map<int, string>::iterator it = Players.begin(); it != Players.end(); ++it) {
        //imprimimos la clave y el valor por cada posicion en la estructura
        cout << (*it).first << ": " << (*it).second << endl;
    }
}