//otra forma de declarar y manipular arreglos C++

#include <iostream>
#include <vector>


int main(){

    std::vector<int> numeros{2,4,6,8,10,12,14,16,18,20};

    for(const int numero : numeros){
        std::cout<< "Numero :"<< numero <<std::endl;
    }
    
    return 0;
}