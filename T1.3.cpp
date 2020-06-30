#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class binario256 {
public:
    int B0; //LSB
    int B1;
    int B2;
    int B3;
    int B4;
    int B5;
    int B6;
    int B7; //MSB
};
binario256 encontrarbinarios(int num){
    int rem;
    int vectordebits[8]={0,0,0,0,0,0,0,0};
binario256 numerobinario;
numerobinario.B0=0;
numerobinario.B1=0;
numerobinario.B2=0;
numerobinario.B3=0;
numerobinario.B4=0;
numerobinario.B5=0;
numerobinario.B6=0;
numerobinario.B7=0;

    if (num>=128){
        for (int i = 0; i<8;i){
        rem = num % 2;
        num /= 2;
        vectordebits[7-i] = rem;
        }
    }else if (num<128 && num>=64){
        for (int i = 0; i<7;i){
            rem = num % 2;
            num /= 2;
            vectordebits[6-i] = rem;
        }
    }else if (num<64 && num>=32){
        for (int i = 0; i<6;i){
        rem = num % 2;
        num /= 2;
        vectordebits[5-i] = rem;
        }
    }else if (num<32 && num>=16){
        for (int i = 0; i<5;i){
        rem = num % 2;
        num /= 2;
        vectordebits[4-i] = rem;
        }
    }else if (num<16 && num>=8){
        for (int i = 0; i<4;i){
        rem = num % 2;
        num /= 2;
        vectordebits[3-i] = rem;
        }
    }else if (num<8 && num>=4){
        for (int i = 0; i<3;i){
        rem = num % 2;
        num /= 2;
        vectordebits[2-i] = rem;
        }
    }else if (num<4 && num>=2){
        for (int i = 0; i<2;i){
        rem = num % 2;
        num /= 2;
        vectordebits[1-i] = rem;
        }
    }else {
        for (int i = 0; i<1;i){
        rem = num % 2;
        num /= 2;
        vectordebits[0] = rem;
        }
    }
    numerobinario.B0=vectordebits[0];
    numerobinario.B1=vectordebits[1];
    numerobinario.B2=vectordebits[2];
    numerobinario.B3=vectordebits[3];
    numerobinario.B4=vectordebits[4];
    numerobinario.B5=vectordebits[5];
    numerobinario.B6=vectordebits[6];
    numerobinario.B7=vectordebits[7];
    return numerobinario;
}
int main()
{
    int numeroramdom; //variable para poner el valor aleatorio e insertarla en el vector
    int vectorramdom[256]; //arreglo de int de 0 a 255 de 256 espacios
    srand (time(NULL));
    for(int i = 0; i<256;i++){
        numeroramdom = rand()%256;;
        vectorramdom[i] = numeroramdom;

    }
    binario256 numerodeprueba;
    numerodeprueba = encontrarbinarios(vectorramdom[20]);
    cout << numerodeprueba.B7 << numerodeprueba.B6 << numerodeprueba.B5 << numerodeprueba.B4 << numerodeprueba.B3 << numerodeprueba.B2 << numerodeprueba.B1 << numerodeprueba.B0 << endl;
}

