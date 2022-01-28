#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>

using namespace std;
int romano(char z);
int veriOrd(int x, int y);
int main()
{
    char in[20];
    int num[20];
    cout<<"Ingrese el numero romano: ";
    cin>>in;
    int now;// variable de el caracter romanos
    int orden; //signo del caracter romano a decimal
    now=romano(in[0]);
    num[0]=now;
    for(int i=1;i<strlen(in);i++){ // iterador de la cadena para crear arreglo decimal
        now=romano(in[i]);
        num[i]=now;
        orden=veriOrd(num[i-1],num[i]);
        num[i-1]=num[i-1]*(orden);
    }
    int sum=0;//
    for(int a=0;a<strlen(in);a++){// iterador para sumar los elementos de num
        sum=sum+num[a];
    }
    cout<<"El numero numero ingresado fue: "<<in<<endl;
    cout<<"Que corresponde: "<<sum<<endl;
    return 0;
}
int veriOrd(int x, int y){ //devuelve un negativo para saber si el numero anterior es menor
    if (x<y){
        return-1;
    }
    else{
        return 1;
    }
}

int romano( char z){ // de caracter romanos a numero decimal
    switch (z){
    case 67:{
        return 100;
    }
    case 68:{
        return 500;
    }
    case 73:{
        return 1;
    }
    case 76:{
        return 50;
    }
    case 77:{
        return 1000;
    }
    case 86:{
        return 5;
    }
    case 88:{
        return 10;
    }
    default: {
        return 0;
    }
    }
}
//EL MISMO PROGRAMA PERO EN ARDUINO
/*
String in;
int romano(char z);
int veriOrd(int x, int y);
void setup()
{
  Serial.begin(9600);
  Serial.println("Ingrese un numero romano: ");
  while(Serial.available()==0){
  }
  in=Serial.readString();
    int num[20];
    int now;
    int orden;
    int sum;
    char roma=in[0];
    now=romano(roma);
    num[0]=now;
  for(int i=1;i<in.length();i++){
        roma=in[i];
        now=romano(roma);
        num[i]=now;
        orden=veriOrd(num[i-1],num[i]);
        num[i-1]=num[i-1]*(orden);
    }
    sum=0;
    for(int a=0;a<in.length();a++){
        sum=sum+num[a];
    }
  Serial.println("El numero ingresado fue :"+in);
  Serial.print("Que corresponde: ");
  Serial.println(sum);
}
int romano( char z){
    switch (z){
    case 67:{
        return 100;
    }
    case 68:{
        return 500;
    }
    case 73:{
        return 1;
    }
    case 76:{
        return 50;
    }
    case 77:{
        return 1000;
    }
    case 86:{
        return 5;
    }
    case 88:{
        return 10;
    }
    default: {
        return 0;
    }
    }
}
int veriOrd(int x, int y){
    if (x<y){
        return-1;
    }
    else{
        return 1;
    }
}
void loop()
{

}
*/
