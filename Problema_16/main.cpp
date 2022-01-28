#include <iostream>

using namespace std;

int main()
{
    int in;
    int numerador=1;
    int denominador=1;
    int caminos;
    cout<<"Ingrese el numero: ";
    cin>>in;
    //ciclo para el denominador
    for(int i=2;i<=in;i++){ //ciclo para el denominador
        denominador=i*denominador;
    }
    denominador=denominador*denominador;// denominador de la formula
    //Ciclo para el numerador
    for(int j=2;j<=in*2;j++){ //ciclo para numerador
        numerador=j*numerador;//numerador de la formula
    }
    //Posibles caminos
    caminos=numerador/denominador;
    cout<<"Para una malla "<<in<<"x"<<in<<" puntos hay "<<caminos<<" caminos"<<endl;
    return 0;
}

