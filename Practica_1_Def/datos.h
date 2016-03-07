#ifndef DATOS_H
#define DATOS_H
#include <string>
#include <sstream>
using namespace std;

class Datos
{
private:
    string datos[15]{
        //Nombres
        "Juan",
        "Luis",
        "Marta",
        "Sandra",
        "Alba",
        "Fernando",
        "Alberto",
        //Apellidos
        "Garcia",
        "Alvarez",
        "Sutil",
        "Ramirez",
        "Fidalgo",
        "Hernandez",
        "Perez",
        "Chimichanga"
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
