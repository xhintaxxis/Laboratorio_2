#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>
void mensaje(int mx[], int p);
void digit(int a);
void userIn(int u[], int QL);
//void veri(int user[],int ciclo, int star,int sq);
using namespace std;

int main()
{
    int ejem[]={1,2,3,4,5,6,7,8,9};
    int pilo=3;
    int sq;
    int user[500];
    int magico;
    bool ver=true;
    cout<<"Las posiciones de la matriz se organizaran de la siguiente forma: "<<endl;
    mensaje(ejem,pilo);
    cout<<endl;
    cout<<"Ejemplo matriz 3x3"<<endl;
    cout<<endl;
    cout<<"Ingrese el numero del cuadrado de la matriz: ";
    cin>>sq;
    cout<<endl;
    cout<<"Por favor ingrese el numero en la posicion indicada"<<endl;
    userIn(user,sq);
    mensaje(user,sq);
    magico=(sq*((sq*sq)+1)/2);
    int ite=1;
        switch(ite){
        case 1:{
            int sum1;
            for(int i=0; i<sq*sq;i+=sq){
                sum1=0;
                for(int j=i;j<i+sq;j++){
                    sum1=sum1+user[j];

                }
                if (sum1!=magico){
                    ver=false;
                }
         }
        }
        case 2:{
            int sum2;
            for(int i=0;i<sq*sq;i=i+1+sq){
                sum2+=user[i];
            }
            if (sum2!=magico){
                ver=false;
            }
        }
        case 3:{
            int sum3;
            int caso=0;
            for(int i=0;i<sq;i++){
                sum3=0;
                for(int j=caso;j<sq*sq;j+=sq){
                    sum3+=user[j];
                }
                if (sum3!=magico){
                    ver=false;
                }
                caso++;
            }

        }


}
if (ver==false){
    cout<<"La matriz no es magica"<<endl;
}
else{
    cout<<"LA MATRIZ ES MAGICA"<<endl;
}
}

void userIn(int u[], int QL){ //generar arreglo de matriz por el usuario
    int elm;
    for(int i=0;i<QL*QL;i++){
        cout<<"Posicion "<<i+1<<": ";
        cin>>elm;
        u[i]=elm;
    }
}
void digit(int a){//espacios
    int x=1;
    while(a>=10){
        a=a/10;
        x++;
    }
    for(int y=0;y<3-x;y++){
        cout<<" ";
    }
}
void mensaje(int mx[], int p){// generar matriz en la terminal
    for(int i=0;i<p;i++){
        cout<<"----";
    }
    cout<<"-"<<endl;
    for(int j=0;j<p*p;j+=p){
        cout<<"|";
        for(int x=j;x<j+p;x++){
            digit(mx[x]);
            cout<<mx[x];
            cout<<"|";
        }
        cout<<endl;
        for(int i=0;i<p;i++){
            cout<<"----";
        }
        cout<<"-"<<endl;
    }
}
