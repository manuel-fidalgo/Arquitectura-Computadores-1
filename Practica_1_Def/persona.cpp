#include "persona.h"


Persona::Persona(string s, string s2, string s3,string s4){
    name = s;
    s_name = s2;
    s2_name = s3;
    dni = s4;
}
Persona::Persona(){

}
string Persona::getID(){
    return this->dni;
}

