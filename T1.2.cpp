#include <iostream>

using namespace std;

int main(){
signed int S; // iniciamos una variable para las chicharras por minuto
signed int Fa; //iniciamos una variable para la temperatura en F
signed int C; // iniciamos una vriable para la temperatura en C

std::cout <<"Chicharreos por minuto: ";
std::cin >> S;
Fa = (S/4)+40; // formula para obtener la temperatura en F en funcion de los chicharreos por minuto
C = (Fa - 32)* 5 / 9;
std::cout <<"la temperatura es: " << C << endl;
}
