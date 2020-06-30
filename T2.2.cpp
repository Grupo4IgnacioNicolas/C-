#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char *caracter;

int main()
{
bool esnumero(char),esletra(char);
void imprimirsecuencia(char[50]);
char frase[50];
caracter=frase;

char temp;

int i=0;

do{
    if(i%2==0){
        cout<<"Escribe un numero: ";
        cin>> temp;
        if(esnumero(temp)){
            frase[i]=temp;
            i++;
        }else{
        cout<<"NUMERO"<<endl;
        }
    }else{
        cout<<"Escribe una letra: ";
        cin>> temp;
        if(esletra(temp)){
            frase[i]=temp;
            i++;
        }else{
        cout<<"LETRA"<<endl;
        }
    }
}while(i<50);
cout<<endl;
cout<<"su vector es: ";

for(int j=0;j<50;j++){
    cout<<frase[j];
}
cout<<endl;
imprimirsecuencia(frase);
}
void imprimirsecuencia(char frase[50]){ // funcion que muestra por pantalla la secuencia
bool esletra(char), esnumero(char);
int cantidad;
char letra;
char temporal;

for(int i=0;i<50;i++){
    temporal = frase[i];

    if(esnumero(temporal)){
        cantidad = (int (temporal)-48);
        //cout<<cantidad;//descomentar para mostrar la cantidad de veces que se debe escribir la letra
    }else if(esletra(temporal)){
        for(int k=0;k<cantidad;k++){
            cout<<temporal;
        }
    }
cout<<endl;
}
}

bool esnumero(char car){ //funcion que determina si el caracter introducido es un numero

bool esnum = 0;
int asci;

asci = int(car);

if(48<=asci && asci<=57){
    esnum = 1;
}

return esnum;
}

bool esletra(char car){ //funcion que determina si el caracter introducido es una letra
bool eslet = 0;
int asci;

asci = int(car);

if((65<=asci&&asci<=90)||(97<=asci&&asci<=122)){
    eslet = 1;
}
return eslet;
}
