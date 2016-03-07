#include "profesor.h"


Profesor::Profesor(string s, string s2, string s3, string s4, vector<Estudiante> lista_estudiantes){
    name = s;
    s_name = s2;
    s2_name = s3;
    dni = s4;
    alumnos=lista_estudiantes;

    cout << "Se ha creado al profesor: ";
    this->imprimirProfesor();
    cout << " con estos alumnos: " << endl;
    this->imprimirAlumnos();

}
void Profesor::imprimirAlumnos(){
    for (int var = 0; var < alumnos.size(); ++var) {
        alumnos[var].imprimir();
    }
}
void Profesor::agnadirListaAlumnos(vector<Estudiante> lista_estudiantes){
    alumnos=lista_estudiantes;
}

void Profesor::agnadirAlumno(Estudiante s){
    alumnos.push_back(s);
}
void Profesor::imprimirMejorAlumno(){
    double acum = 0;
    int posicion = -1;
    for (int i = 0; i < alumnos.size(); ++i) {
        if(alumnos[i].darNumeroNotas()==3){
            if(alumnos[i].darNotaMedia()>acum){
                acum = alumnos[i].darNotaMedia();
                posicion=i;
            }
        }
    }
    cout << endl; //Temas de formato;
    if(posicion==-1){
        cout << "Ninguno de los alumnos tiene tres notas" << endl;
    }else{
        cout << "El alumno con la mejor media es: ";
        alumnos[posicion].imprimir();
    }
}
void Profesor::imprimirProfesor(){
    ostringstream os;
    os << this->name << " " << this->s_name <<" " << this->s2_name << " " << "DNI: "
       << this->dni;
    cout << os.str();
}
vector<Estudiante> Profesor::darAlumnos(){
    return this->alumnos;
}
