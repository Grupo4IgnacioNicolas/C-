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

int vector_lecturas [3];
int *vector_dir = vector_lecturas;

void GenerarLectura(){


for ( int i=0;i<3;i++){
    *vector_dir = rand()%500+1;
    vector_dir++;
}
vector_dir = &vector_lecturas[0];
}

bool EscribirEnArchivo(std::string NombreArchivo, std::string text1, std::string text2, std::string text3){
std::ofstream archivo;
archivo.open(NombreArchivo, std::ios_base::app);
archivo<<text1<<", "<<text2<<", "<<text3<<std::endl;
return true;
}

int main(){

double tiempo_total=0;


srand (time(NULL));

string texto1,texto2,texto3;
struct timespec start, finish;
double elapsed;

do {



    clock_gettime(CLOCK_MONOTONIC, &start);

    GenerarLectura();
    texto1 = to_string(vector_lecturas[0]);
    texto2 = to_string(vector_lecturas[1]);
    texto3 = to_string(vector_lecturas[2]);

    cout<<texto1<<","<<texto2<<","<<texto3<<endl;

    EscribirEnArchivo("Frecuencias",texto1,texto2,texto3);
    usleep(rand()% 500000 + 500000);

    clock_gettime(CLOCK_MONOTONIC, &finish);

    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;

    tiempo_total = tiempo_total + elapsed;

    cout<<tiempo_total<<endl;
}while (tiempo_total<60);



}
