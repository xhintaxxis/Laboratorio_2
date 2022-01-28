
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>
using namespace std;
int factorial(int a);
bool sinR(int veri[], int a);
void ConNum(int aux[],int a);

int main()
{
    unsigned short int num[]={0,1,2,3,4,5,6,7,8,9};
    int aux[]={10,10,10,10,10,10,10,10,10,10};// cadena auxiliar, iniciada en 10 para verificar que los numeros no se repitan
    int In=1000000;
    cout<<"Ingrese Un Numero: ";
    cin>>In;
    int orden=9;
    int anterior=1;
    long int limite;
    bool veri;

    int ind=0;
    limite=factorial(orden);
    //este proceso tratar de ir acotanto los limites
    while(true){
        for(int i=0;i<10;i++){
            veri=sinR(aux,num[i]);
            if(veri==true){
                if(anterior<=In and In<=limite){
                    aux[ind]=num[i];
                    orden--;
                    ind++;
                    limite=anterior+factorial(orden)-1;
                    break;

                }
                else{
                    anterior=limite+1;
                    limite=factorial(orden)+limite;

                }
            }


        }
        if(orden==-1){
            break;
        }
    }
        ConNum(aux, In);
        return 0;
    }
    int factorial(int a){ // Factorial de el orden
        int facto=1;
        for(int i=2;i<=a;i++){
            facto=facto*i;
        }
        return facto;
    }

    bool sinR(int veri[], int a){ //verificar que no se esten repitiendo numeros
        for(int i=0;i<10;i++){
            if(veri[i]==a){
                return false;
            }
        }
        return true;
    }

    void ConNum(int aux[], int a){ //funcion para la salida
        cout<<"La permutacion numero "<<a<<" es ";
        for(int i=0;i<10;i++){
            cout<<aux[i];
        }
        cout<<endl;

    }
