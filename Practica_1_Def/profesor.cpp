//El archivo .cpp solo implementa los metodos declarados en el header
//Hace falta incluir el header e ya.
#include "profesor.h"


Profesor::Profesor(vector<Estudiante> lista_estudiantes){
    alumnos=lista_estudiantes;
    cout << "Se ha creado un profesor con estos alumnos: " << endl;
    for (int var = 0; var < total; ++var) {
        alumos[i].imprimir();
    }
}
//Immplementacion de metodos
void Profesor::agnadirListaAlumnos(vector<Estudiante> lista_estudiantes){

}

void Profesor::agnadirAlumno(Estudiante s){
    alumnos.push_back(s);
}
void Profesor::imprimirMejorAlumno(){

}
int Profesor::darPosicionEstudiante(Estudiante s){
    for(int i=0; i<alumnos.size();i++){
        if(*alumnos[i].getID() == *s.getID()){   //Comparacion de referencias
            return i;
        }
    }
    return -1;
}
