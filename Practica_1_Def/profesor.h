#ifndef PROFESOR_H
#define PROFESOR_H
#include <vector>
#include <iostream>
#include "persona.h"
#include "estudiante.h"
using namespace std;


class Profesor
{
public:
    Profesor();
    Profesor(vector<Estudiante> lista_estudiantes);
    void agnadirListaAlumnos(vector<Estudiante> lista_estudiantes);
    void agnadirAlumno(Estudiante s);
    void asignarNotas(int n,Estudiante s);
    void asignarNotas(int n, int n2, Estudiante s);
    void asignarNotas(int n, int n2, int n3, Estudiante s);
    void darLista();
    void imprimirMejorAlumno(); //De los que tengan tres notas
    int notamedia(Estudiante s);

private:
    vector<Estudiante> alumnos;
    int darPosicionEstudiante(Estudiante s);
};
#endif // PROFESOR_H
