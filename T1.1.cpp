#include <iostream>

using namespace std;

class empleado {
public:
    int CLA;
    int CAT;
    int ANT;
    int Sal;
};
int main()
{
    bool apto = 0;                               //flag apto determina si el empleado es apto
    empleado empleado1;                           // instancia de empleado
    // recibimos datos del empleado
    std::cout << "Clave del empleado: ";
    std::cin >> empleado1.CLA;
    std::cout << "Categoría del empleado: ";
    std::cin >> empleado1.CAT;
    std::cout << "Antiguedad del empleado: ";
    std::cin >> empleado1.ANT;
    std::cout << endl;
    // decidimos si el empleado es o no apto
    if (empleado1.CAT == 3 || empleado1.CAT == 4){
        if (empleado1.ANT > 5){
            apto=1;
        }
    }else if(empleado1.CAT == 2){
        if (empleado1.ANT > 7){
            apto=1;
        }
    }else {
    apto=0;
    }
    // informamos por consola si el empleado es apto
    if (apto){
        cout << "Empleado apto para el puesto";
    }else{
        cout << "Empleado no apto para el puesto";
    }
return 0;
}

