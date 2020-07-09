#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int arreglo_frecuencias [3];
int *direccion_arreglo = arreglo_frecuencias;



int main(){

double ttot=0;


srand (time(NULL));

string numero1,numero2,numero3;
struct timespec start, finish;
double elapsed;

do {



    clock_gettime(CLOCK_MONOTONIC, &start);

    for ( int i=0;i<3;i++){
    *direccion_arreglo = rand()%500+1;
    direccion_arreglo++;
    }
    direccion_arreglo = &arreglo_frecuencias[0];

    numero1 = to_string(arreglo_frecuencias[0]);
    numero2 = to_string(arreglo_frecuencias[1]);
    numero3 = to_string(arreglo_frecuencias[2]);

    cout<<numero1<<","<<numero2<<","<<numero3<<endl;

    std::ofstream archivo;
    archivo.open("Frecuencia", std::ios_base::app);
    archivo<<numero1<<", "<<numero2<<", "<<numero3<<std::endl;

    usleep(rand()%500000+500000);

    clock_gettime(CLOCK_MONOTONIC, &finish);

    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;

    ttot = ttot + elapsed;

    cout<<ttot<<endl;
}while (ttot<60);



}
