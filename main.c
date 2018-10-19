//Rodrigo Perez Solis
//A01411278
//Este programa sirve para darle al usuario el valor de el tamaño de la cadena.


#include <stdio.h>
int stringlength(char strlength[]){
    int contador=0;
    while(strlength[contador]!='\0' ){
        contador=contador+1;
    }
    return contador-1;//    Contador menos 1 por que el fgets toma el enter
}


int main() {

    char stl[100];//Defino el valor de la cadena
    printf("Please introduce a word");//Le pido al usuario que introduzca la palabra que quiera
    fgets(stl, sizeof(stl),stdin);

int valor_regresado;//Variable de el tamaño de la cadena

    valor_regresado=stringlength(stl);//Formula para dar el resultado del contador
    printf("tu valor regresado es %i",valor_regresado);//Le doy el resultado al usuario



    return 0;



}