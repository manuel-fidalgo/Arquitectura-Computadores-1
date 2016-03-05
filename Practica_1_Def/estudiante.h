#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <vector>
#include <iostream>
#include "persona.h"
using namespace std;

class Estudiante :public Persona{

private:
    vector<int> notas;
public:
    Estudiante();
    Estudiante(int n, int n2, int n3);
    void agnadirNota(int nota);
    vector<int> darNotas();
    int darNumeroNotas();

};

#endif // ESTUDIANTE_H
