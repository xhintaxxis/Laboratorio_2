#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>
void mensaje(int mx[], int p);
void digit(int a);
void funcionRotar(int ori[],int copy[] );


using namespace std;

int main(){
    int ori[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int copy[25];
    cout<<"Matriz rotada 0 grados."<<endl;
    mensaje(ori,5);
    cout<<endl;
    int grados[]={90,180,270};
    for(int i=0;i<3;i++){
        funcionRotar(ori,copy);
        cout<<"Matriz rotada "<<grados[i]<<" grados."<<endl;
        mensaje(ori,5);
        cout<<endl;
    }


    return 0;
}

void funcionRotar(int ori[],int copy[] ){
    int salto=4;
    int i=0;
    //Fila #1
    for(i=0;i<5;i++){
        copy[salto]=ori[i];
        salto+=5;
    }
    //Fila #2
    salto=3;
    for(i=5;i<10;i++){
        copy[salto]=ori[i];
        salto+=5;
    }
    //Fila #3
    salto=2;
    for(i=10;i<15;i++){
        copy[salto]=ori[i];
        salto+=5;
    }
    //Fila #4
    salto=1;
    for(i=15;i<20;i++){
        copy[salto]=ori[i];
        salto+=5;
    }
    //Fila #5
    salto=0;
    for(i=20;i<25;i++){
        copy[salto]=ori[i];
        salto+=5;
    }
    //Pasar los elementos de copy al original
    for(i=0;i<25;i++){
        ori[i]=copy[i];
    }
}

void digit(int a){ //Saber cuanto espacios dejar para el numero
    int x=1;
    while(a>=10){
        a=a/10;
        x++;
    }
    for(int y=0;y<3-x;y++){
        cout<<" ";
    }
}
void mensaje(int mx[], int p){ //imprimir matriz
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
