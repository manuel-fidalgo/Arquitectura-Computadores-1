#include "datos.h"

using namespace std;


string Datos::nombreAleatorio(){
    return datos[rand()%10]; //[0,9]
}
string Datos::apellidoAleatorio(){
    return datos[10+rand()%(20-10)]; //[10,19]
}
string Datos::dniAleatorio(){
    ostringstream os;
    for(int i=0; i<8; i++){
        os << rand()%10;
    }
    os << datos[rand()%20].substr(0,1);
    return os.str();
}
int Datos::notaAleatoria(){
    return rand()%11;
}
