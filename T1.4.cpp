#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>


using namespace std;

int mediaaritmetica(signed int arreglo[24]);
int varianza(signed int arreglo[24],int x);
int desvestandar(signed int arreglo[24],int x);
int moda(signed int arreglo[24]);

int main(){

srand (time(NULL));
signed int TEM[24];
int media;
int var;
int ds;
int modaa;
//hacemos el vector con temperaturas entre -100 y 100 grados
for (int i=0;i<24;i++){
    TEM[i] = rand()%20+15;
    cout << TEM[i]<<endl;
}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"media"<<endl;
media = mediaaritmetica(TEM);
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"varianza"<<endl;
var = varianza(TEM,media);
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"desviacion estandar"<<endl;
ds = desvestandar(TEM,media);
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"moda"<<endl;
modaa = moda(TEM);

cout << "La media es: "<<media<<endl;
cout << "La varianza es: "<<var<<endl;
cout << "La desviacion estandar  es: "<<ds <<endl;
cout << "La moda es: "<<modaa<<endl;

}
int mediaaritmetica(signed int arreglo[24]){

signed int acumulador =0;
signed int media;

for(int i=0;i<24;i++){
    acumulador = acumulador + arreglo[i];
    cout<< acumulador << endl;
}
media = acumulador/24;

return media;
}

int varianza(signed int arreglo[24],int x){

signed int acumulador =0;
int var =0;

for(int i=0;i<24;i++){
    acumulador = acumulador +  pow((arreglo[i]-x),2);
    cout<<acumulador<<endl;
}
 var = acumulador / 24;
 cout<< var<< endl;

 return var;

}
int desvestandar(signed int arreglo[24],int x){

signed int acumulador =0;
int var =0;

for(int i=0;i<24;i++){
    acumulador = acumulador + pow((arreglo[i]-x),2);
    cout<< acumulador<<endl;
}
 var = acumulador / 24;
 var = sqrt(var);
 return var;
}
int moda(signed int arreglo[24]){

int frecuencia[24]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int numeromayor=0;
int indice=0;
int moda;
for (int i=0;i<24;i++){
    for (int j=0;j<24;j++){
        if (arreglo[i] == arreglo[j]){
            frecuencia[i]++;
        }
    }
    cout<<frecuencia[i]<<endl;
}
for(int i=0;i<24;i++){
       if(frecuencia[i]>numeromayor){
        numeromayor = frecuencia[i];
        indice = i;
       }
}
moda = arreglo[indice];
return moda;
}
