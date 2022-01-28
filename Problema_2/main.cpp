
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
using namespace std;
void altLetter(char ran[]);

int main()
{
    char alpha[]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
    char ran[200];
    int cont;
    altLetter(ran);
    for(int i=0;i<26;i++){ //Ciclo para el abecedario
        cont=0;
        for(int x=0;x<200;x++){ //Ciclo para los 200 caracteres
            if(alpha[i]==ran[x]){
                cont+=1;
            }
        }
        cout<<alpha[i]<<"="<<cont<<endl;
    }

}

void altLetter(char ran[]){ //Crear un arreglo de 200 letras aleatorias
     srand(time(NULL));
     unsigned char letra;
     for (int i=0;i<200;i++){
          letra= 65+rand()%26;
          ran[i]=letra;
     }
     cout<<ran<<endl;
}
