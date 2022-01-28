#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>

using namespace std;

void entero(char x[], int *y);
int main()

{
    char num[200];
    int numero;
    cout<<"Ingrese una cadena numerica: ";
    cin>>num;
    entero(num, &numero);
    cout<<numero<<endl;
    return 0;
}

void entero(char x[],int *y){ //Convertir a entero
    int numeros= atoi(x);
    *y=numeros;
}
