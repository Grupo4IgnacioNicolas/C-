#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char frase[50];
    char letra[1];
    int contador=0;
    cout<<"Escriba 50 letras, si escribe mas no importa, pero se consideran solo 50 letras: "<<endl;
    cin.getline(frase,50,'\n');
    cout<<"Escriba la letra que desea buscar: "<<endl;
    cin.getline(letra,1,'\n');

    for(int i=0;i<50;i++){
        if(frase[i] == letra[0]){
            contador++;
        }
    }
    cout<<"La letra: "<<letra<<" se encuentra escrita: "<<contador<<" veces"<<endl;
    getch();
    return 0;
}
