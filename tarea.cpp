/*
   Crear una matriz de 10x10
   llena la matriz con numero aleatorios entre el 50 y 100
   colocar cada numero aleatorio de mayor a menor dentro de la matriz
   mostrar por consola la matriz con los datos
   realizar la suma de todos los elementos de la matriz

   Programando con sentencias en bloque.
*/
// incluimos la libreria de entrada y salida
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
// algoritmo quickSort
int Particion(int arreglo[], int inicio, int final){

   int base = arreglo[inicio];
   int i = inicio + 1;
   for (int indice = i; indice <= final; indice++){

      if (arreglo[indice] < base){

         swap(arreglo[indice], arreglo[i]);
         i++;
      }
   }
   swap(arreglo[inicio], arreglo[i - 1]);
   return i - 1;
}

void quickSort(int arreglo[], int inicio, int final){

   if (inicio < final){

      int base = Particion(arreglo, inicio, final);
      quickSort(arreglo, inicio, base - 1);
      quickSort(arreglo, inicio + 1, final);
   }
}

int main(){
   // delaracion de arreglo auxiliar para ordenar los elementos
   int arreglo_auxiliar[100];
   // declaracion de variable para la suma de la matriz
   int i = 0;
   int suma_de_la_matriz = 0;
   // creamos la matriz de 10 filas por 10 columnas
   int numeros[10][10];

   // llenado de la matriz con numeros aleatorios entre 50 y 100 Ordenaos
   srand(time(NULL));
   // declaramos el ciclo para llenar el arreglo
   for (int indice = 0; indice < 100; indice++){

      arreglo_auxiliar[indice] = 50 + rand() % (100 + 1 - 50);

   }
   // usamos em metodo de ordenamiento para ordenar el arreglo
   quickSort(arreglo_auxiliar, 0, 100 - 1);

   // vaciamos los datos del arreglo ya ordenado a la matriz para que quede ordenada de menor a mayor
   // el primer ciclo controla el recorrido de las filas
   for (int fila = 0; fila < 10; fila++){
      // el segundo ciclo controla el recorrido de las columnas
      for (int columna = 0; columna < 10; columna++){
         //pasamos los datos del arreglo a la matriz
         numeros[fila][columna] = arreglo_auxiliar[i++];
      }
   }

   // mostrar la matriz por consola
   // usando la misma logica para llenar la matriz para imprimirla por consola
   for(int fila = 0; fila < 10; fila++){
      for (int columna = 0; columna < 10; columna++){

         std::cout << numeros[fila][columna] << " ";
      }

      std::cout << "\n";
   }

   // sumar todos los elementos de la matriz
   for (int fila = 0; fila < 10; fila++){

      for(int columna = 0; columna < 10; columna++){
         suma_de_la_matriz = suma_de_la_matriz + numeros[fila][columna];
      }
   }

   std::cout<< "La suma de la matriz es: " << suma_de_la_matriz <<std::endl;

   return 0;
}