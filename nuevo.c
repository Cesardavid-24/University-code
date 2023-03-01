#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
/* Declaracion de Variables*/
int sizeA;
int contIntercepcionByC=-1;
int contIntercepcionAyC=-1;
int contIntercepcionAyB=-1;
int contIntercepcionAByC=-1;
int contComplementodeA=-1;
int contComplementodeB=-1;
int contComplementodeC=-1;
int contComplementodeAuBuC=-1;
int contdeAmenosB=-1;
int contComplementodeCresA=-1;
int contBmenosA=-1;
int contA=0;
int contB=0;
int contC=0;
int intercepcionAyB[20];
int intercepcionAyC[20];
int intercepcionByC[20];
int intercepcionAyByC[20];
int universo[20];
int complementoA[20];
int complementoB[20];
int complementoC[20];
int AmenosB[20];
int complementodeCresA[20];
int complementoAuBuC[20];
int BmenosA[20];
int conjuntoA[20];
int conjuntoB[20];
int conjuntoC[20];
int false=0;
int Intersepcciones(char letra[],char letra2[],int size,int cont,int cont2,int cont3,int conjunto1[],int conjunto2[],int conjunto3[]){
 conjunto3[size];
 
    for(int i = 0; i < cont;i++){
      for(int j=0; j < cont2;j++){
        if(conjunto1[i] == conjunto2[j]){
          cont3++;
          conjunto3[cont3]=conjunto1[i];          
          break;
        }  
      }
    }
    if(cont3==-1){
      printf("La Intercepcion de %s y %s Es conjunto Vacio\n",letra,letra2);
    }else{
      printf("Los Elementos que estan en la Inteseccion de %s y %s son \n",letra,letra2);
      printf("\n--------------------------------------------------------\n");
      for(int i=0; i <= cont3; i++){
        printf("%i--",conjunto3[i]);
      }
      printf("\n---------------------------------------------------------\n");
    }
   
}

void mostrarConjunto(char letra[],int cont,int conjunto[]){
	
	if (cont==0)
		printf("El conjunto %s es vacio \n",letra);
	else{
		printf("Los Valores del conjunto %s son:\n",letra);
		for(int i = 0; i < cont;i++)
		{
		  printf("\n--------------------------------------\n");     
		  printf("%i  \n ",conjunto[i]);
		  printf("\n--------------------------------------\n");
		}
	}
    printf("\n");
    system("pause");
    system("cls");
}

int Complementos(char letra[],int size,int cont1,int cont2,int complemento1[],int universe[],int conj1[]){
  complemento1[size];
  int false=0;
  for(int i=0; i < size;i++){
    false=0;
    for(int j=0; j < cont1;j++){
      if(universe[i] == conj1[j]){
        false++;
      }
    }
    if(false==0){
      cont2++;
      complemento1[cont2] = universe[i];    
    } 
  }
  if(cont2==-1){
    printf("el complemento de %s es conjunto vacio",letra);
  }else{
    printf("el complemento de %s es \n",letra);
    printf("\n------------------------\n");
    for(int i=0; i <= cont2;i++){
      printf("%i--\n",complemento1[i]);
    }
    printf("\n-------------------------\n");
  }
}

int ComplementosEspeciales(char letra[20],char letra2[],char letra3[20],int size,int cont1,int cont2,int cont3,int complemento1[],int universe[],int conj1[]){
 complemento1[size];
 cont2=-1;
  
  int false=0;
  for(int i=0; i < cont3;i++)
  { false=0;
    for(int j=0; j < cont1;j++)
    {
      if(universe[i] == conj1[j])
      {
        false++;

      }
        
    }

    if(false==0)
    {
      cont2++;
        complemento1[cont2] = universe[i];
      
    }
    
    }
  if(cont2==-1){
    printf("%s de %s y %s es conjunto vacio",letra,letra2,letra3);
  }else{
    printf("%s de %s %s es: \n",letra,letra2,letra3);
    printf("\n----------------------------------------\n");
    for(int i=0; i <= cont2;i++)
    {
      printf("%i--\n",complemento1[i]);

    }
    printf("\n----------------------------------------\n");
  }
}


int main(void){
    int opc=0;
    int opc2=0;
    int universo[sizeA];
    int opc3=0;
    do{
     system("COLOR 9F");
     system("cls");
     printf("LOGICA DE CONJUNTOS");
     printf("\n-------------------------\n");
     printf("MENU DE OPCIONES");
     printf("\n-------------------------\n\n");
     printf("1.Ingrese los valores del universo\n");
     printf("-----------------------------------\
      \n");
     printf("2.Salir\n\n");
     printf("Opcion a Escoger: ");
     scanf("%d",&opc);
     switch(opc)
     {
        case 1:
        system("cls");
        printf("\nIndique el Tama%co del Universo \n",164);
        scanf("%i",&sizeA);

        system("cls");
        printf("\nIngrese los valores que Estaran dentro del Universo\n");
        for (int i = 0; i < sizeA; i++){
        system("cls");
        printf("Valor del Universo %i", i+1);
        printf("\n----------------------\n");
        printf("Valor a Escoger:");
        scanf("%i",&universo[i]);
        system("cls");

       if(universo[i]%2==0){
			conjuntoA[contA]=universo[i];
			contA++;
	   }
		
		if(universo[i]%3==0){
			conjuntoB[contB]=universo[i];
			contB++;
       }
        
		if(universo[i]%4==0){
			conjuntoC[contC]=universo[i];
			contC++;
       }
     }
     
     do
     {
        system("COLOR BF");
        printf("\n-------------------------\n");
     printf("MENU DE OPCIONES");
     printf("\n-------------------------\n\n");
     printf("1.Revisar los Valores en el Universo\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("2.Revisar los Valores De los Conjuntos A%cB y C\n",44);
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("3.Obtener la intercepcion del Conjunto A y B\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("4.Obtener la intercepcion del Conjunto A y C\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("5.Obtener la intercepcion del Conjunto B y C\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("6.Obtener la intercepcion del Conjunto A%cB y C\n",44);
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("7.Siguiente Pagina de Opciones\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("8.Volver a Menu Anterior\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("Opcion a Escoger: ");
     scanf("%d",&opc2);
     switch(opc2){
        case 1:
        system("cls");
        printf("los valores del universo son:\n");
         printf("\n---------------------------------\n");
        for(int i = 0; i < sizeA;i++)
        {
        printf("%i--",universo[i]);
        }
        printf("\n--------------------------------\n");

        printf("\n\n");
        system("pause");
        system("cls");
        break;

        case 2:
        system("cls");
        mostrarConjunto("A",contA,conjuntoA);
	    mostrarConjunto("B",contB,conjuntoB);
	    mostrarConjunto("C",contC,conjuntoC);
        break;

        case 3:
        system("cls");
        Intersepcciones("A","B",sizeA,contA,contB,contIntercepcionAyB,conjuntoA,conjuntoB,intercepcionAyB);
        system("pause");
        system("cls");
        break;

        case 4:
        system("cls");
        Intersepcciones("A","C",sizeA,contA,contC,contIntercepcionAyC,conjuntoA,conjuntoC,intercepcionAyC);
        system("pause");
        system("cls");
        break;

        case 5:
        system("cls");
        Intersepcciones("B","C",sizeA,contB,contC,contIntercepcionByC,conjuntoB,conjuntoC,intercepcionByC);
        system("pause");
        system("cls");
        break;

        case 6:
        system("cls");
         intercepcionAyB[sizeA];
    
    for(int i = 0; i < contA;i++)
    {
      for(int j=0; j < contB;j++){
        if(conjuntoA[i] == conjuntoB[j])
        {
          contIntercepcionAyB++;
          intercepcionAyB[contIntercepcionAyB]=conjuntoA[i];

          break;
        

        }
        
      }

    }
    

   intercepcionAyByC[sizeA];
  for(int i =0;i < contIntercepcionAyB;i++)
  {
    for(int j=0;j < contC;j++)
  {
    if(intercepcionAyB[i]==conjuntoC[j]);{
      contIntercepcionAByC++;
      intercepcionAyByC[contIntercepcionAByC]=intercepcionAyB[i];
      break;
    }
    
    
      
  }
  }
  if(contIntercepcionAByC==-1){
    printf("La interseccion es conjunto vacio\n");

  }else{
    printf("los elementos de la interseccion de A,B y C son \n");
    printf("\n----------------------------------------------\n");
    for(int i=0; i <= contIntercepcionAByC;i++){
      printf("%i--",intercepcionAyByC[i]);
      
    }
    printf("\n----------------------------------------------\n");
  }
  system("pause");
  system("cls");
        break;

        case 7:
        do
        {
            system("COLOR 3F");
            printf("\n-------------------------\n");
     printf("MENU DE OPCIONES");
     printf("\n-------------------------\n\n");
     printf("1.Obtener el Complemento de A\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("2.Obtener el Complemento de B\n",44);
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("3.Obtener el Complemento de C\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("4.Obtener el Complemento de AuBuC\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("5.Obtener la Diferencia de A y B\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("6.Obtener el Complemento de C Respecto a A\n",44);
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("7.Obtener La diferencia simetrica de A y B\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("8.Volver a Menu Anterior\n");
     printf("-----------------------------------\n");
     printf("-----------------------------------\n");
     printf("Opcion a Escoger: ");
     scanf("%d",&opc3);
     switch(opc3)
     {
        case 1:
        system("cls");
        Complementos("A",sizeA,contA,contComplementodeA,complementoA,universo,conjuntoA);
        system("pause");
        system("cls");
        break;

        case 2:
        system("cls");
        Complementos("B",sizeA,contB,contComplementodeB,complementoB,universo,conjuntoB);
        system("pause");
        system("cls");
        break;

        case 3:
        system("cls");
        Complementos("C",sizeA,contC,contComplementodeC,complementoC,universo,conjuntoC);
        system("pause");
        system("cls");
        break;
        
        case 4:
        system("cls");
     complementoAuBuC[sizeA];
  
  
  for(int i=0; i < sizeA;i++)
  { false=0;
    for(int j=0; j < contA;j++)
    {
      if(universo[i]==conjuntoA[j]){
        false++;
        break;
      }
      
      
    
    }
    false=0;
    for(int k=0; k < contB;k++)
      {
        if(universo[i]==conjuntoB[k])
        {
          false++;
          

        }
      }
      
      false=0;
      for(int l=0; l < contC;l++)
      {
        if(universo[i]==conjuntoC[l])
        {
          false++;
          
        }
      }


    if(false==0)
    {
      contComplementodeAuBuC++;
        complementoAuBuC[contComplementodeAuBuC] = universo[i];
        
    }
      

    }

  
      if(contComplementodeAuBuC==-1){
    printf("el complemento de AuBuC es conjunto vacio\n");
  }else{
    printf("el complemento de AuBuC es \n");
    for(int i=0; i <= contComplementodeAuBuC;i++)
    {
      printf("%i\n",complementoAuBuC[i]);

    }
  }
    system("pause");
    system("cls");
    break;

    case 5:
    system("cls");
    ComplementosEspeciales("La Diferencia","A","y B",sizeA,contB,contdeAmenosB,contA,AmenosB,conjuntoA,conjuntoB);/*funcion de A-B*/
    system("pause");
    system("cls");
    break;

    case 6:
    system("cls");
    ComplementosEspeciales("El complemento","C","Respecto a A",sizeA,contC,contComplementodeCresA,contA,complementodeCresA,conjuntoA,conjuntoC);/*funcion de Complemento de C respecto a A*/
    system("pause");
    system("cls");
    break;

    case 7:
    system("cls");
     AmenosB[sizeA];
     contdeAmenosB=-1;
     contBmenosA=-1;
    
  
  
  for(int i=0; i < contA;i++)
  { false=0;
    for(int j=0; j < contB;j++)
    {
      if(conjuntoA[i] == conjuntoB[j])
      {
        false++;

      }
        
    }


    if(false==0)
    {
        contdeAmenosB++;
        AmenosB[contdeAmenosB] = conjuntoA[i];
      
    }
      

    }
     BmenosA[sizeA];

    for(int i=0; i < contB;i++)
    {false=0;
     for(int j=0; j < contA;j++)
     {
      if(conjuntoB[i]==conjuntoA[j])
      {
        false++;

      }

     }
     if(false==0){
      contBmenosA++;
      BmenosA[contBmenosA]=conjuntoB[i];
     }
    }
  if(contdeAmenosB==-1&&contBmenosA==-1){
    printf("La diferencia Simetrica de A y B es conjunto vacio");
  }else{
    printf("La diferencia Simetrica de A y B es: \n");
    printf("\n----------------------------------------\n");
    printf("A es:");
    for(int i=0; i <= contdeAmenosB;i++){
      printf("%i--",AmenosB[i]);
    }
    printf("\n------------------------------------------\n");
    printf("B es:");
    for(int i=0; i <=contBmenosA;i++){
      printf("%i--",BmenosA[i]);
    }
    printf("\n--------------------------------------------\n");
  }
   system("pause");
   system("cls");
    break;

    case 8:
    break;

    default:
    system("cls");
    printf("La opcion No es valida\n");
    system("pause");
    break;
     }
        }while(opc3 !=8);
        break;
        case 8:
        break;
        default:
        system("cls");
        printf("La opcion No es valida");
        break;
     }
     }while(opc2 !=8);
    case 2:
    break;
    default:
    system("cls");
    printf("La opcion No es valida\n");
    system("pause");
    break;
    }
    }while(opc !=2);
}

/**
 * CONJUNTO UNIVERSO INGRESADO POR EL USUARIO =  1,2,3,4,5,6,7,8,9,10
 * CONJUNTO A multiplos de 2 = 2 4 6 8 10
 * CONJUNTO B multiplos de 3 = 3 6 9 
 * CONJUNTO C multiplos de 4 = 4 8 
 *
 * 
 * Opcion A DEBERIA IMPRIMIR =  1,2,3,4,5,6,7,8,9,10 3 9
 * opcion B DEBERIA IMPRIMIR =  1,2,3,4,5,6,7,8,9,10 2 4 8 10 4 8
 * opcion C DEBERIA IMPRIMIR =  1,2,3,4,5,6,7,8,9,10 2 6 10 3 6 9
*/