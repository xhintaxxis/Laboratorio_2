
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{
    char alpha[]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
    char entrada[100];
    char out[100];
    cout<<"Ingrese los caracteres: ";
    cin>>entrada;
    int n;
    n=strlen(entrada);
    for(int i=0;i<=n;i++){ //Ciclo parala cadena de entrada
        char m;
        bool uco=false;
        for(int x=0;x<=25;x++){ //Ciclo para el abecedario
            if(entrada[i]==alpha[x]){ // Comprobar si esa letra esta en la cedena de entrada
                m=alpha[x]-32;
                out[i]=m;
                uco=true;
            }

        }
        if (uco==false){ //Agregar lo que no es letra
            out[i]=entrada[i];
        }
    }
    cout<<"Original: "<<entrada<<endl;
    cout<<"En mayuscula: "<<out<<endl;
    return 0;
}
