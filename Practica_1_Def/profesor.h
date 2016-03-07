#ifndef PROFESOR_H
#define PROFESOR_H
#include <vector>
#include <iostream>
#include <sstream>
#include "persona.h"
#include "estudiante.h"
using namespace std;


class Profesor : Persona{
public:
    Profesor(string s, string s2, string s3, string s4,vector<Estudiante> lista_estudiantes);
    void agnadirListaAlumnos(vector<Estudiante> lista_estudiantes);
    void agnadirAlumno(Estudiante s);
    void imprimirAlumnos();     //Saca por pantalla la lista de alumnos
    void imprimirMejorAlumno(); //De los que tengan tres notas
    void imprimirProfesor();
    int notamedia(Estudiante s);
    vector<Estudiante> darAlumnos();

private:
    vector<Estudiante> alumnos;
    int darPosicionEstudiante(Estudiante s);
};
#endif // PROFESOR_H
