#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include "persona.h"
#include "estudiante.h"
#include "profesor.h"
#include <stdlib.h>
#include <time.h>
#include <sstream>
using namespace std;

class Datos{
private:
    static string datos[]{
        "Juan",
        "Luis",
        "Marta",
        "Sandra",
        "Alba",
        "Fernando",
        "Alberto",
        "Gonzalez",
        "Fernandez",
        "Ramirez",
        "Fidalgo",
        "Garcia",
        "Hernandez",
        "Perez",
        "Yoksetioo"};

public:
    string nombreAleatorio(){
        return datos[rand()%7];
    }
    string apellidoAleatorio(){
        return datos[7+rand()%(15-7)];
    }
    string dniAleatorio(){
        ostringstream os;
        for(int i=0; i<8; i++){
            os << rand()%10;
        }
        os << datos[rand()%15].substr(0,1);
        return os;
    }
    int notaAleatoria(){
        return rand()%11;
    }
};

int main(void){
    calificando();
    return 0;
}
calificando(){
    Datos d = new Datos(); //Objeto de tipo datos para rellenar la matriz
    vector<Estudiantes> estudiantes; //Vector de Estudiantes
    int numNotas;
    //Se rellena el vector de estudiantes con un numero aleatorio de estudiantes [5,15]
    for(int i=0; i<d.notaAleatoria()+5;i++){
        numNotas = (rand()%3)+1;
        if(numNotas==1){
            estudiantes.push_back(new Estudiante(
                                      d.dniAleatorio(),
                                      d.apellidoAleatorio(),
                                      d.apellidoAleatorio(),
                                      d.notaAleatoria()
                                      ));
        }else if(numNotas==2){
            estudiantes.push_back(new Estudiante(
                                      d.dniAleatorio(),
                                      d.apellidoAleatorio(),
                                      d.apellidoAleatorio(),
                                      d.notaAleatoria(),
                                      d.notaAleatoria()
                                      ));
        }else if(numNotas==3){
            estudiantes.push_back(new Estudiante(
                                      d.dniAleatorio(),
                                      d.apellidoAleatorio(),
                                      d.apellidoAleatorio(),
                                      d.notaAleatoria(),
                                      d.notaAleatoria(),
                                      d.notaAleatoria()
                                      ));
        }else{
            cout << "Error de numero aletorio que decide las notas" << endl;
        }
    }
    //Intanciamos el profesor con su lista de estudiantes
    Profesor f = new Profesor(
                d.nombreAleatorio(),
                d.apellidoAleatorio(),
                d.apellidoAleatorio(),
                estudiantes
                );
    //Añadimos un alumno mas...
    f.agnadirAlumno(new Estudiante( d.dniAleatorio(),
                                    d.apellidoAleatorio(),
                                    d.apellidoAleatorio(),
                                    d.notaAleatoria(),
                                    d.notaAleatoria()
                        ));
    );

}
