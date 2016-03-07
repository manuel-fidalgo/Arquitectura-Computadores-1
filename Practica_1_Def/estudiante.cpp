#include "estudiante.h"


Estudiante::Estudiante(string s1, string s2, string s3,string s4, int n1, int n2, int n3){
    this->name = s1;
    this->s_name = s2;
    this->s2_name = s3;
    this->dni = s4;
    this->notas.push_back(n1);
    this->notas.push_back(n2);
    this->notas.push_back(n3);
}
Estudiante::Estudiante(string s1, string s2, string s3,string s4, int n1, int n2){
    this->name = s1;
    this->s_name = s2;
    this->s2_name = s3;
    this->dni = s4;
    this->notas.push_back(n1);
    this->notas.push_back(n2);
}
Estudiante::Estudiante(string s1, string s2, string s3,string s4, int n1){
    this->name = s1;
    this->s_name = s2;
    this->s2_name = s3;
    this->dni = s4;
    this->notas.push_back(n1);
}
Estudiante::Estudiante(){

}
Estudiante::~Estudiante(){

}

void Estudiante::agnadirNota(int n){
   if(darNumeroNotas()<3){
       notas.push_back(n);
   }else{
     cout << "Ya hay tres notas, no se pueden mas" << endl;
   }
}
vector<int> Estudiante::darNotas(){
    return notas;
}
int Estudiante::darNumeroNotas(){
    return notas.size();
}
double Estudiante::darNotaMedia(){
    double suma;
    for(int i=0; i<this->darNumeroNotas();i++){
        suma = suma + notas[i];
    }
    return suma/this->darNumeroNotas();
}
void Estudiante::imprimir(){
    cout << this->name << " " << this->s_name << " "
         << this->s2_name << " DNI: " << this->dni << " Notas: ";
            for(int i=0; i<notas.size(); ++i){
             cout << notas[i] << " ";
            }
            cout << endl;
}
