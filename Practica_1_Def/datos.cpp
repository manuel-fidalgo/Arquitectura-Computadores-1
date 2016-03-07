#include "datos.h"

using namespace std;


string Datos::nombreAleatorio(){
    return datos[rand()%7];
}
string Datos::apellidoAleatorio(){
    return datos[7+rand()%(15-7)];
}
string Datos::dniAleatorio(){
    ostringstream os;
    for(int i=0; i<8; i++){
        os << rand()%10;
    }
    os << datos[rand()%15].substr(0,1);
    return os.str();
}
int Datos::notaAleatoria(){
    return rand()%11;
}
