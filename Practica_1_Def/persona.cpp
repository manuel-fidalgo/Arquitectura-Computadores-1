#include "persona.h"
#include <string>
#include <string.h>
#include <stdlib.h>

Persona::Persona(){

}
Persona::Persona(char* name, char* subname_1,  char* subname_2, char* DNI){
    datos = (char **)malloc(4*sizeof(char *));
    for(int i=0; i<4; i++){
        datos[i]= (char*)malloc(30*sizeof(char));
    }
    strcpy(datos[0],name);
    strcpy(datos[1],subname_1);
    strcpy(datos[2],subname_2);
    strcpy(datos[3],DNI);
}
