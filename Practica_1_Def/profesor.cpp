//El archivo .cpp solo implementa los metodos declarados en el header
//Hace falta incluir el header e ya.
#include "profesor.h"


Profesor::Profesor(string s, string s2, string s3, string s4, vector<Estudiante> lista_estudiantes){
    name = s;
    s_name = s2;
    s2_name = s3;
    dni = s4;
    alumnos=lista_estudiantes;
    cout << "Se ha creado un profesor con estos alumnos: " << endl;
    imprimirAlumnos();
}
void Profesor::impirmirAlumnos(){
    for (int var = 0; var < alumnos.size(); ++var) {
        alumos[i].imprimir();
    }
}

void Profesor::agnadirListaAlumnos(vector<Estudiante> lista_estudiantes){
    alumnos=lista_estudiantes;
}

void Profesor::agnadirAlumno(Estudiante s){
    alumnos.push_back(s);
}
void Profesor::imprimirMejorAlumno(){
    double acum=0;
    int posicion=-1;
    for (int i = 0; i < alumnos; ++i) {
        if(alumnos[i].darNumeroNotas()==3){
            if(alumnos[i].darNotaMedia()>acum){
                acum = alumnos[i].darNotaMedia();
                posicion=i;
            }
        }
    }
    if(posicion==-1){
        cout << "Ninguno de los alumnos tiene tres notas" << endl;
    }else{
        cout << "El alumno con la mejor media es: "<< alumnos[posicion].imprimir();
    }
}
