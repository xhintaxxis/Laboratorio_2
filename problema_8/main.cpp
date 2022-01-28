#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>
using namespace std;
bool veri(char x);

int main(){
    char num[200]; //cadenas para los numeros
    char let[100]; //cadena para las letras
    char in[200];
    cout<<"Ingrese la cadena de caracteres: ";
    cin>>in;
    int lon=strlen(in);
    bool cis;
    int contNum=0; //para indexar la cadena de los numeros
    int contAl=0; //para indexar la cadena de las letras
    for(int i=0;i<=lon;i++){ //Iterador con la longitud de la cadena de entrada
        cis=veri(in[i]);
        if(true==cis){ //Comprobar si es un letra
            let[contAl]=in[i];
            contAl+=1;
        }
        else{
            num[contNum]=int(in[i]);
            contNum+=1;
        }
    }
    cout<<"Original: "<<in<<endl;
    cout<<"Numero: "<<num<<endl;
    cout<<"Letras: "<<let<<endl;
}

bool veri(char x){ // para verificar si es letra
    char alpha[]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
    for(int i=0;i<=25;i++){
        if(x==alpha[i]){
            return true;
        }
    }
    return false;

}
