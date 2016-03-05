//El archivo .cpp solo implementa los metodos declarados en el header
//Hace falta incluir el header e ya.
#include "profesor.h"

//Constructores sobrecargados
Profesor::Profesor(){
    cout << "Se ha creado un profesor sin parametros"<< endl;
}
Profesor::Profesor(vector<Estudiante> lista_estudiantes){
    alumnos=lista_estudiantes;
    cout << "Se ha creado un profesor con estos alumnos" << lista_estudiantes << endl;
}
//Immplementacion de metodos
void Profesor::agnadirListaAlumnos(vector<Estudiante> lista_estudiantes){

}

void Profesor::agnadirAlumno(Estudiante s){

}
//Metodos sobrecargados
void Profesor::asignarNotas(int n, Estudiante s){

}
void Profesor::asignarNotas(int n, int n2, Estudiante s){

}
void Profesor::asignarNotas(int n, int n2, int n3, Estudiante s){

}

void Profesor::darLista(){

}
void Profesor::imprimirMejorAlumno(){

}
int Profesor::notamedia(Estudiante s){

}
int Profesor::darPosicionEstudiante(Estudiante s){
    for(int i=0; i<alumnos.size();i++){
        if(alumnos[i].Equals(s)){   //Comparacion de referencias
            return i;
        }
    }
    return -1;
}
