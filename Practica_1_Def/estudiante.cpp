#include "estudiante.h"

Estudiante::Estudiante(){
    cout << "se ha creado un estudiante sin notas" << endl;
}
Estudiante::Estudiante(int n1, int n2, int n3){
    notas.push_back(n1);
    notas.push_back(n2);
    notas.push_back(n3);
}
void Estudiante::agnadirNota(int n){
    for (int var = 0; var < 3; ++var) {
       if(notas[var]==0){
           notas[var]=n;
           break;
       }
    }
}
vector<int> Estudiante::darNotas(){
    return notas;
}
int Estudiante::darNumeroNotas(){
    return notas.size();
}
