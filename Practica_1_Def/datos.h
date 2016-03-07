#ifndef DATOS_H
#define DATOS_H
#include <string>
#include <sstream>
#include <time.h>
using namespace std;

class Datos
{
private:
    string datos[20]{
        //Nombres
        "Juan",
        "Luis",
        "Marta",
        "Sandra",
        "Alba",
        "Fernando",
        "Alberto",
        "Marcos",
        "Eduardo",
        "Pablo",
        //Apellidos
        "Garcia",
        "Alvarez",
        "Sutil",
        "Ramirez",
        "Fidalgo",
        "Hernandez",
        "Perez",
        "Castro",
        "Lopez",
        "Martinez"
    };

public:
    Datos(){}
    ~Datos(){}
    string nombreAleatorio();
    string apellidoAleatorio();
    string dniAleatorio();
    int notaAleatoria();
};


#endif // DATOS_H
