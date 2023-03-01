//Lenguaje C++
#include<iostream>
#include<stdlib.h>

int main(){
    char o;
    std::cout<<"Desea apagar su PC ahora, [Y/N]? "<<std::endl;
    std::cin>> o;
    if(o == y || o == Y){
        system("C:\\WINDOWS\\System32\\shutdown/s");
    }
    return EXIT_SUCCESS;
}